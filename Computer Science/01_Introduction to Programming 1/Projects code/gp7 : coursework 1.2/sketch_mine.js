let gameChar_x;
let gameChar_y;
let floorPos_y;
let canyon;

let isLeft;
let isRight;
let isJumping;
let isPlummeting;
let isFalling;

let jumpPower = 15;
let gravity = 0.98; // Gravity adjusted to be similar to Earth's gravity
let charVelocity = 0;
let gameOver = false;

let trees_x;
let treePos_y;

let clouds_x;
let cloudPos_y;
let cloudScale;

let mountains = [];

let cameraPosX = 0;
let collectables;
let canyons;

let gamechar_world_x;
let scrollPos;

let game_score;
let flagpole;

let lives;

let platforms;

function setup() {
  createCanvas(1024, 576);
  floorPos_y = (height * 3) / 4;
  lives = 3;
  startGame();
}

function startGame() {
  gameChar_x = width / 2;
  gameChar_y = floorPos_y;

  isLeft = false;
  isRight = false;
  isJumping = false;
  isPlummeting = false;
  isFalling = false;

  trees_x = [70, 500, 750, 1200];
  treePos_y = (height * 3) / 6.1;

  clouds_x = [20, 100, 500, 1100, 1500];
  cloudPos_y = 100;
  cloudScale = 1.2;

  mountains = [
    { x_pos: -400, y_pos: 100 },
    { x_pos: 500, y_pos: 100 },
    { x_pos: 1000, y_pos: 100 },
  ];

  collectables = [
    { x_pos: 300, y_pos: floorPos_y - 40, size: 40, isFound: false },
    { x_pos: 750, y_pos: floorPos_y - 40, size: 40, isFound: false },
    { x_pos: 900, y_pos: floorPos_y - 40, size: 40, isFound: false },
  ];

  canyons = [
    { x_pos: -300, width: 100 },
    { x_pos: 100, width: 100 },
    { x_pos: 600, width: 100 },
  ];

  platforms = [];

  platforms.push(createPlatforms(200, floorPos_y - 50, 100));

  game_score = 0;
  scrollPos = 0;
  cameraPosX = 0;
  gamechar_world_x = gameChar_x - scrollPos;

  flagpole = { x_pos: 1300, isReached: false };
}

function draw() {
  background(100, 155, 255); // fill the sky blue

  noStroke();
  fill(0, 155, 0);
  rect(0, floorPos_y, width, height - floorPos_y); // green ground

  fill(255);
  textSize(14);
  text("Score: " + game_score, 20, 30);

  drawLive();

  push();

  translate(-cameraPosX, 0);

  cameraPosX = gameChar_x - width / 2; // camera movement

  // Draw mountains
  drawMountains();

  // Draw Trees
  drawTrees();

  // Draw Clouds
  drawClouds();

  // Platforms
  for (let i = 0; i < platforms.length; i++) {
    platforms[i].draw();
  }

  // Draw and check multiple canyons
  for (let i = 0; i < canyons.length; i++) {
    drawCanyon(canyons[i]);
    checkCanyon(canyons[i]);
  }

  // Draw and check multiple collectables
  for (let i = 0; i < collectables.length; i++) {
    if (!collectables[i].isFound) {
      drawCollectable(collectables[i]);
      checkCollectable(collectables[i]);
    }
  }

  //Draw the  game character
  if (isLeft && isFalling) {
    // Jumping left
    drawCharacter(gameChar_x, gameChar_y, "left", "falling");
  } else if (isRight && isFalling) {
    // Jumping right
    drawCharacter(gameChar_x, gameChar_y, "right", "falling");
  } else if (isLeft) {
    // Walking left
    drawCharacter(gameChar_x, gameChar_y, "left", "walking");
  } else if (isRight) {
    // Walking right
    drawCharacter(gameChar_x, gameChar_y, "right", "walking");
  } else if (isFalling || isPlummeting) {
    // Jumping facing forward
    drawCharacter(gameChar_x, gameChar_y, "forward", "falling");
  } else {
    // Standing front facing
    drawCharacter(gameChar_x, gameChar_y, "forward", "standing");
  }

  // Game over and level complete conditional statements

  if (lives < 1) {
    fill(255, 0, 0);
    noStroke();
    textSize(35);
    text(`Game Over. Press Space to Restart`, gameChar_x - 250, height / 2);
  }

  if (flagpole.isReached) {
    fill(255, 0, 0);
    noStroke();
    textSize(35);
    text(
      `Level Complete. Press Space to Restart`,
      gameChar_x - 250,
      height / 2
    );
  }

  // Interaction code
  if (!isPlummeting) {
    if (isLeft) {
      gameChar_x -= 5;
    }
    if (isRight) {
      gameChar_x += 5;
    }
  }

  if (isJumping && !isPlummeting) {
    charVelocity = -jumpPower;
    isJumping = false;
  }
  if (isPlummeting) {
    gameChar_y += charVelocity;
    charVelocity += gravity;

    if (gameChar_y >= height) {
      gameOver = true;
      isPlummeting = false;
      charVelocity = 0;
    }
  }

  if (!isPlummeting && !gameOver) {
    gameChar_y += charVelocity;
    charVelocity += gravity;

    if (gameChar_y >= floorPos_y) {
      gameChar_y = floorPos_y;
      isFalling = false;
      charVelocity = 0;
    }
  }

  gamechar_world_x = gameChar_x - scrollPos;

  if (!flagpole.isReached) {
    checkFlagpole();
  }

  renderFlagpole();

  pop();
}

function drawCharacter(x, y, direction, state) {
  push();
  stroke(1);
  fill(255, 200, 150); // skin color
  ellipse(x, y - 65, 23); // Head
  fill(255, 0, 0); // Red shirt
  rect(x - 15, y - 55, 30, 25, 5);
  fill(255, 200, 150); // skin color
  ellipse(x - 20, y - 42, 15); // Left hand
  ellipse(x + 20, y - 42, 15); // Right hand
  fill(0, 100, 255); // Pants color
  rect(x - 13, y - 30, 25, 30, 2); // pants

  // Direction and state specific changes can be applied here (for arms, legs, etc.)

  pop();
}

function keyPressed() {
  if (isPlummeting) {
    return; // Exit the function early if the character is plummeting
  }

  if (keyCode == 65 || keyCode == 37) {
    isLeft = true;
  } else if (keyCode == 68 || keyCode == 39) {
    isRight = true;
  } else if (keyCode == 87 || keyCode == 38) {
    if (!isFalling && !isPlummeting) {
      isJumping = true;
    }
  }
}

function keyReleased() {
  if (keyCode == 65 || keyCode == 37) {
    console.log(isPlummeting);
    isLeft = false;
  } else if (keyCode == 68 || keyCode == 39) {
    console.log(isPlummeting);
    isRight = false;
  }
}

function drawClouds() {
  for (let i = 0; i < clouds_x.length; i++) {
    noStroke();
    fill(255);
    ellipse(clouds_x[i], cloudPos_y, 80 * cloudScale, 50 * cloudScale);
  }
}

function drawMountains() {
  for (var i = 0; i < mountains.length; i++) {
    fill(0, 155, 0);
    triangle(
      mountains[i].x_pos + 400,
      mountains[i].y_pos + 340,
      mountains[i].x_pos + 300,
      mountains[i].y_pos + 132,
      mountains[i].x_pos + 140,
      mountains[i].y_pos + 340
    );

    triangle(
      mountains[i].x_pos + 200,
      mountains[i].y_pos + 340,
      mountains[i].x_pos + 150,
      mountains[i].y_pos + 250,
      mountains[i].x_pos + 100,
      mountains[i].y_pos + 340
    );
  }
}

function drawTrees() {
  for (var i = 0; i < trees_x.length; i++) {
    stroke(0);
    fill(180, 80, 0);
    ellipse(trees_x[i] + 300, treePos_y + 100, 40, 100);
    fill(0, 150, 0);
    ellipse(trees_x[i] + 300, treePos_y + 50, 120, 120);
  }
}

function drawCollectable(t_collectable) {
  if (!t_collectable.isFound) {
    stroke(5);
    fill(255, 215, 0);
    ellipse(t_collectable.x_pos, t_collectable.y_pos, t_collectable.size);
  }
}

function checkCollectable(t_collectable) {
  if (
    gameChar_x > t_collectable.x_pos - t_collectable.size / 2 &&
    gameChar_x < t_collectable.x_pos + t_collectable.size / 2 &&
    gameChar_y >= t_collectable.y_pos - t_collectable.size / 2 &&
    gameChar_y <= t_collectable.y_pos + t_collectable.size / 2
  ) {
    t_collectable.isFound = true;
    game_score += 1;
  }
}

function drawCanyon(t_canyon) {
  fill(139, 69, 19);
  rect(t_canyon.x_pos, floorPos_y, t_canyon.width, height - floorPos_y);
}

function checkCanyon(t_canyon) {
  // Adjusted to check for platforms
  if (!isPlummeting) {
    let isContact = false;

    // Check platform contact
    for (let i = 0; i < platforms.length; i++) {
      if (platforms[i].checkContact(gamechar_world_x, gameChar_y)) {
        isContact = true;
        isFalling = false;
        charVelocity = 0;
        gameChar_y = platforms[i].y; // Snap character to platform's top
        break;
      }
    }

    // If not on any platform and not plummeting, apply gravity (falling)
    if (!isContact && gameChar_y < floorPos_y) {
      isFalling = true;
    } else if (gameChar_y >= floorPos_y) {
      isFalling = false;
    }
  }

  // Check if the character is over the canyon
  if (
    gameChar_x > t_canyon.x_pos &&
    gameChar_x < t_canyon.x_pos + t_canyon.width &&
    gameChar_y >= floorPos_y
  ) {
    isPlummeting = true;
    charVelocity = 5; // start falling into the canyon
  }
}

function renderFlagpole() {
  push();

  stroke(100);
  strokeWeight(5);
  line(flagpole.x_pos, floorPos_y, flagpole.x_pos, floorPos_y - 250);

  fill(255, 0, 0);
  noStroke();

  if (flagpole.isReached) {
    rect(flagpole.x_pos, floorPos_y - 250, 50, 50);
  } else {
    rect(flagpole.x_pos, floorPos_y - 50, 50, 50);
  }

  pop();
}

function checkFlagpole() {
  let d = abs(gamechar_world_x - flagpole.x_pos);

  if (d < 15) {
    flagpole.isReached = true;
  }
}

function checkPlayerDie() {
  if (gameChar_y >= height) {
    lives -= 1;
    console.log(lives);

    if (lives > 0) {
      startGame(); // Reset the game if lives are remaining
    } else {
      console.log("Game over");
    }
  }
}

function drawLive() {
  for (let i = 0; i < lives; i++) {
    fill(255, 0, 0);
    ellipse(30 + i * 30, 50, 20, 20); // Drawing life tokens as red circles
  }
}

function createPlatforms(x, y, length) {
  let p = {
    x: x,
    y: y,
    length: length,
    draw: function () {
      fill(255, 0, 255);
      rect(this.x, this.y, this.length, 20);
    },
    checkContact: function (gc_x, gc_y) {
      if (gc_x > this.x && gc_x < this.x + this.length) {
        let d = this.y - gc_y;
        if (d >= 0 && d < 5) {
          console.log("On platform");
          return true;
        }
      }
      return false;
    },
  };

  return p;
}
