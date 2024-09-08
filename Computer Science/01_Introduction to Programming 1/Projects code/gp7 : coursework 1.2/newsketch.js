let charPosX;
let charPosY;
let groundPosY;
let chasm;

let moveLeft;
let moveRight;
let isJumpingUp;
let isFallingDown;
let isInAir;

let jumpHeight = 15;
let grav = 0.98;
let charSpeed = 0;
let isGameOver = false;

let treePositionsX;
let treeBaseY;

let cloudObjects;

let mountainObjects = [];

let cameraOffsetX = 0;
let itemCollectables;
let terrainCanyons;

let charWorldX;
let camScroll;

let playerScore;
let endFlag;

let remainingLives;

let platformsArray;

let enemiesArray;

function setup() {
  createCanvas(1024, 576);
  groundPosY = (height * 3) / 4;
  remainingLives = 3;
  initializeGame();
}

function initializeGame() {
  charPosX = width / 2;
  charPosY = groundPosY;

  moveLeft = false;
  moveRight = false;
  isJumpingUp = false;
  isFallingDown = false;
  isInAir = false;

  treePositionsX = [70, 500, 750, 1200];
  treeBaseY = (height * 3) / 6.1;

  cloudObjects = [
    { x_pos: -500, y_pos: 150, width: 50 },
    { x_pos: -300, y_pos: 160, width: 50 },
    { x_pos: 0, y_pos: 200, width: 50 },
    { x_pos: 300, y_pos: 220, width: 50 },
    { x_pos: 150, y_pos: 160, width: 50 },
    { x_pos: 500, y_pos: 180, width: 50 },
    { x_pos: 700, y_pos: 190, width: 70 },
    { x_pos: 900, y_pos: 200, width: 60 },
  ];

  mountainObjects = [
    { x_pos: -1000, y_pos: 100 },
    { x_pos: -800, y_pos: 100 },
    { x_pos: -500, y_pos: 100 },
    { x_pos: -300, y_pos: 100 },
    { x_pos: -100, y_pos: 100 },
    { x_pos: 700, y_pos: 100 },
    { x_pos: 1000, y_pos: 100 },
    { x_pos: 1200, y_pos: 100 },
  ];

  itemCollectables = [
    { x_pos: -1000, y_pos: groundPosY - 30, size: 40, isCollected: false },
    { x_pos: -700, y_pos: groundPosY - 30, size: 40, isCollected: false },
    { x_pos: -535, y_pos: groundPosY - 30, size: 40, isCollected: false },
    { x_pos: -256, y_pos: groundPosY - 30, size: 40, isCollected: false },
    { x_pos: 105, y_pos: groundPosY - 30, size: 40, isCollected: false },
    { x_pos: 300, y_pos: groundPosY - 30, size: 40, isCollected: false },
    { x_pos: 750, y_pos: groundPosY - 30, size: 40, isCollected: false },
    { x_pos: 900, y_pos: groundPosY - 30, size: 40, isCollected: false },
  ];

  terrainCanyons = [
    { x_pos: -300, width: 100 },
    { x_pos: 100, width: 100 },
    { x_pos: 600, width: 100 },
  ];

  platformsArray = [];
  platformsArray.push(createPlatform(-1000, groundPosY - 50, 100));
  platformsArray.push(createPlatform(-600, groundPosY - 25, 100));
  platformsArray.push(createPlatform(-200, groundPosY - 40, 100));
  platformsArray.push(createPlatform(200, groundPosY - 60, 100));
  platformsArray.push(createPlatform(500, groundPosY - 35, 100));
  platformsArray.push(createPlatform(900, groundPosY - 50, 100));

  enemiesArray = [];
  enemiesArray.push(new Enemy(250, groundPosY - 10, 100));

  playerScore = 0;
  camScroll = 0;
  cameraOffsetX = 0;
  charWorldX = charPosX - camScroll;

  endFlag = { x_pos: 1300, isReached: false };
}

function draw() {
  background(100, 155, 255); // sky color
  noStroke();
  fill(0, 155, 0);
  rect(0, groundPosY, width, height - groundPosY); // ground

  fill(255);
  textSize(14);
  text("Score: " + playerScore, 20, 30);

  drawLivesIndicator();

  push();
  translate(-cameraOffsetX, 0);
  cameraOffsetX = charPosX - width / 2; // camera movement

  // Draw mountains
  renderMountains();

  // Draw Trees
  renderTrees();

  // Draw Clouds
  renderClouds();

  // Platforms
  for (let i = 0; i < platformsArray.length; i++) {
    platformsArray[i].draw();
  }

  // Draw and check multiple canyons
  for (let i = 0; i < terrainCanyons.length; i++) {
    renderCanyon(terrainCanyons[i]);
    checkCanyonCollision(terrainCanyons[i]);
  }

  // Draw and check multiple collectables
  for (let i = 0; i < itemCollectables.length; i++) {
    if (!itemCollectables[i].isCollected) {
      renderCollectable(itemCollectables[i]);
      checkCollectableCollision(itemCollectables[i]);
    }
  }

  // Draw the game character
  if (moveLeft && isInAir) {
    // Jumping left
    drawPlayerCharacter(charPosX, charPosY, "left", "falling");
  } else if (moveRight && isInAir) {
    // Jumping right
    drawPlayerCharacter(charPosX, charPosY, "right", "falling");
  } else if (moveLeft) {
    // Walking left
    drawPlayerCharacter(charPosX, charPosY, "left", "walking");
  } else if (moveRight) {
    // Walking right
    drawPlayerCharacter(charPosX, charPosY, "right", "walking");
  } else if (isInAir || isFallingDown) {
    // Jumping forward
    drawPlayerCharacter(charPosX, charPosY, "forward", "falling");
  } else {
    // Standing front
    drawPlayerCharacter(charPosX, charPosY, "forward", "standing");
  }

  // Game over and level complete checks
  if (remainingLives < 1) {
    fill(255, 0, 0);
    noStroke();
    textSize(35);
    text(`Game Over. Press Space to Restart`, charPosX - 250, height / 2);
  }

  if (endFlag.isReached) {
    fill(255, 0, 0);
    noStroke();
    textSize(35);
    text(`Level Complete. Press Space to Restart`, charPosX - 250, height / 2);
  }

  // Movement interaction
  if (!isFallingDown) {
    if (moveLeft) {
      charPosX -= 5;
    }
    if (moveRight) {
      charPosX += 5;
    }
  }

  if (isJumpingUp && !isFallingDown) {
    charSpeed = -jumpHeight;
    isJumpingUp = false;
  }

  if (isFallingDown) {
    charPosY += charSpeed;
    charSpeed += grav;

    if (charPosY >= height) {
      isGameOver = true;
      isFallingDown = false;
      charSpeed = 0;
    }
  }

  if (!isFallingDown && !isGameOver) {
    charPosY += charSpeed;
    charSpeed += grav;

    if (charPosY >= groundPosY) {
      charPosY = groundPosY;
      isInAir = false;
      charSpeed = 0;
    }
  }

  charWorldX = charPosX - camScroll;

  if (!endFlag.isReached) {
    checkFlagReached();
  }

  // Enemies
  for (let i = 0; i < enemiesArray.length; i++) {
    enemiesArray[i].draw();
    let hasContact = enemiesArray[i].checkCollision(charWorldX, charPosY);

    if (hasContact == true) {
      if (remainingLives > 0) {
        initializeGame();
        break;
      }
    }
  }

  renderFlag();

  pop();
}

function drawPlayerCharacter(x, y, direction, state) {
  push();
  stroke(1);
  fill(0, 0, 255);
  rect(x, y - 50, 50, 50);
  pop();
}

function keyPressed() {
  if (keyCode === 37) {
    // Left arrow key
    moveLeft = true;
  } else if (keyCode === 39) {
    // Right arrow key
    moveRight = true;
  } else if (keyCode === 32 && !isInAir && remainingLives > 0) {
    // Space key for jumping
    isJumpingUp = true;
    isInAir = true;
  } else if (keyCode === 32 && (isGameOver || endFlag.isReached)) {
    // Restart game when game is over or level is completed
    initializeGame();
    isGameOver = false;
  }
}

function keyReleased() {
  if (keyCode === 37) {
    // Left arrow key released
    moveLeft = false;
  } else if (keyCode === 39) {
    // Right arrow key released
    moveRight = false;
  }
}

function drawLivesIndicator() {
  fill(255);
  textSize(16);
  text("Lives: " + remainingLives, 20, 60);
}

function renderTrees() {
  for (let i = 0; i < treePositionsX.length; i++) {
    fill(0, 100, 0);
    triangle(
      treePositionsX[i],
      treeBaseY,
      treePositionsX[i] - 30,
      treeBaseY + 60,
      treePositionsX[i] + 30,
      treeBaseY + 60
    );
  }
}

function renderClouds() {
  for (let i = 0; i < cloudObjects.length; i++) {
    fill(255);
    ellipse(
      cloudObjects[i].x_pos,
      cloudObjects[i].y_pos,
      cloudObjects[i].width * 2,
      cloudObjects[i].width
    );
  }
}

function renderMountains() {
  for (let i = 0; i < mountainObjects.length; i++) {
    fill(139, 69, 19);
    triangle(
      mountainObjects[i].x_pos,
      groundPosY,
      mountainObjects[i].x_pos + 150,
      groundPosY - 300,
      mountainObjects[i].x_pos + 300,
      groundPosY
    );
  }
}

function renderCanyon(t_canyon) {
  fill(100, 155, 255);
  rect(t_canyon.x_pos, groundPosY, t_canyon.width, height - groundPosY);
}

function checkCanyonCollision(t_canyon) {
  if (
    charWorldX > t_canyon.x_pos &&
    charWorldX < t_canyon.x_pos + t_canyon.width &&
    charPosY === groundPosY
  ) {
    isFallingDown = true;
  }
}

function renderCollectable(t_collectable) {
  fill(255, 215, 0);
  ellipse(
    t_collectable.x_pos,
    t_collectable.y_pos,
    t_collectable.size,
    t_collectable.size
  );
}

function checkCollectableCollision(t_collectable) {
  if (
    dist(charWorldX, charPosY, t_collectable.x_pos, t_collectable.y_pos) < 30
  ) {
    t_collectable.isCollected = true;
    playerScore += 1;
  }
}

function createPlatform(x, y, length) {
  let platform = {
    x_pos: x,
    y_pos: y,
    length: length,
    draw: function () {
      fill(150, 75, 0);
      rect(this.x_pos, this.y_pos, this.length, 10);
    },
    checkContact: function (charX, charY) {
      if (charX > this.x_pos && charX < this.x_pos + this.length) {
        let distance = this.y_pos - charY;
        if (distance >= 0 && distance < 5) {
          return true;
        }
      }
      return false;
    },
  };
  return platform;
}

function Enemy(x, y, range) {
  this.x_pos = x;
  this.y_pos = y;
  this.range = range;
  this.currentX = x;
  this.increment = 1;

  this.update = function () {
    this.currentX += this.increment;
    if (
      this.currentX >= this.x_pos + this.range ||
      this.currentX <= this.x_pos
    ) {
      this.increment *= -1;
    }
  };

  this.draw = function () {
    this.update();
    fill(255, 0, 0);
    ellipse(this.currentX, this.y_pos, 30, 30);
  };

  this.checkCollision = function (charX, charY) {
    let distance = dist(charX, charY, this.currentX, this.y_pos);
    if (distance < 30) {
      remainingLives -= 1;
      return true;
    }
    return false;
  };
}

function checkFlagReached() {
  if (dist(charWorldX, charPosY, endFlag.x_pos, groundPosY) < 50) {
    endFlag.isReached = true;
  }
}

function renderFlag() {
  fill(255, 0, 0);
  rect(endFlag.x_pos, groundPosY - 150, 20, 150);
  fill(255);
  triangle(
    endFlag.x_pos,
    groundPosY - 150,
    endFlag.x_pos,
    groundPosY - 100,
    endFlag.x_pos + 60,
    groundPosY - 125
  );
}
