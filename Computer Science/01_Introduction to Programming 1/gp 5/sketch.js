/*The game project part 5 - Multiple Interactables
 */

// var gameChar_x;
// var gameChar_y;
// var floorPos_y;

// var isLeft;
// var isRight;
// var isPlummeting;
// var isFalling;

// var collectable;
// var trees_x;
// var treePos_y;
// var clouds;
// var canyon;

// var cameraPosX;

var collectable = [];

function setup() {
  createCanvas(1024, 576);
  floorPos_y = (height * 3) / 4;
  gameChar_x = width / 2;
  gameChar_y = floorPos_y;

  isLeft = false;
  isRight = false;
  isFalling = false;
  isPlummeting = false;

  collectable = {
    x_pos: 50,
    y_pos: floorPos_y - 30,
    size: 50,
    isFound: false,
  };

  canyon = { x_pos: 100, width: 100 };

  trees_x = [300, 500, 900, 1150];
  treePos_y = height / 2;

  clouds = [
    { x_pos: 100, y_pos: 100, width: 50 },
    { x_pos: 300, y_pos: 120, width: 70 },
    { x_pos: 600, y_pos: 150, width: 60 },
  ];

  mountains = [
    { x_pos: -400, y_pos: 100 },
    { x_pos: 500, y_pos: 100 },
    { x_pos: 1000, y_pos: 100 },
  ];

  cameraPosX = 0;
}

function draw() {
  // Update camera position
  cameraPosX = gameChar_x - width / 2;

  ///////////DRAWING CODE//////////

  background(100, 155, 255); //fill the sky blue

  noStroke();
  fill(0, 155, 0);
  rect(0, floorPos_y, width, height - floorPos_y); //draw some green ground

  push();
  translate(-cameraPosX, 0);

  // Draw Clouds
  drawClouds();

  // Draw Trees
  drawTrees();

  // Draw the canyon

  drawCanyon(canyon);

  //   // Mountain Loop

  drawMountains();

  // Draw the collectable
  drawCollectable(collectable);

  pop();

  // Draw the game character
  if (isLeft && isFalling) {
    // add your jumping-left code
  } else if (isRight && isFalling) {
    // add your jumping-right code
  } else if (isLeft) {
    // add your walking left code
    drawGameCharLeft();
  } else if (isRight) {
    // add your walking right code
    drawGameCharRight();
  } else if (isFalling || isPlummeting) {
    // add your jumping facing forwards code
    drawGameCharJumping();
  } else {
    // add your standing front facing code
    drawGameCharStanding();
  }

  // Interaction code
  if (isLeft) {
    gameChar_x -= 5;
  }

  if (isRight) {
    gameChar_x += 5;
  }

  if (gameChar_y < floorPos_y) {
    gameChar_y += 5;
    isFalling = true;
  } else {
    isFalling = false;
  }

  // Check if character falls into the canyon

  if (gameChar_x <= 362 && gameChar_x >= 322 && gameChar_y >= floorPos_y) {
    isPlummeting = true;
  }

  if (isPlummeting) {
    gameChar_y += 10;
  }

  // Check if collectable is found
  if (
    dist(gameChar_x, gameChar_y, collectable.x_pos, collectable.y_pos) < 265
  ) {
    collectable.isFound = true;
  }
}

function drawGameCharLeft() {
  // The head
  fill(200, 150, 150);
  ellipse(gameChar_x, gameChar_y - 50, 25);

  // The body
  fill(255, 0, 0);
  rect(gameChar_x - 9, gameChar_y - 38, 18, 30);

  // The Legs
  fill(0);
  rect(gameChar_x - 5, gameChar_y - 7, 10, 10);

  // The arms
  fill(200, 150, 150);
  rect(gameChar_x - 12, gameChar_y - 30, 10, 10);
}

function drawGameCharRight() {
  // The head
  fill(200, 150, 150);
  ellipse(gameChar_x, gameChar_y - 50, 25);

  // The body
  fill(255, 0, 0);
  rect(gameChar_x - 9, gameChar_y - 38, 18, 30);

  // The Legs
  fill(0);
  rect(gameChar_x - 5, gameChar_y - 7, 10, 10);

  // The arms
  fill(200, 150, 150);
  rect(gameChar_x + 4, gameChar_y - 30, 10, 10);
}

function drawGameCharJumping() {
  // The head
  fill(200, 150, 150);
  ellipse(gameChar_x, gameChar_y - 50, 35);

  // The body
  fill(255, 0, 0);
  rect(gameChar_x - 13, gameChar_y - 35, 26, 30);

  // The Legs
  fill(0);
  rect(gameChar_x - 15, gameChar_y - 5, 10, 10);
  rect(gameChar_x + 5, gameChar_y - 5, 10, 10);

  // The arms
  fill(200, 150, 150);
  rect(gameChar_x + 12, gameChar_y - 30, 10, 10);
  rect(gameChar_x - 22, gameChar_y - 30, 10, 10);
}

function drawGameCharStanding() {
  // The head
  fill(200, 150, 150);
  ellipse(gameChar_x, gameChar_y - 50, 35);

  // The body
  fill(255, 0, 0);
  rect(gameChar_x - 13, gameChar_y - 35, 26, 30);

  // The Legs
  fill(0);
  rect(gameChar_x - 15, gameChar_y - 5, 10, 10);
  rect(gameChar_x + 5, gameChar_y - 5, 10, 10);
}

function keyPressed() {
  if (!isPlummeting) {
    if (keyCode == 37) {
      isLeft = true;
    } else if (keyCode == 39) {
      isRight = true;
    }
    // Prevent the character from double jumping
    else if (keyCode == 87 || keyCode == 38 || keyCode == 32) {
      if (!isFalling && !isPlummeting) {
        gameChar_y -= 100;
      }
    }
  }
}

function keyReleased() {
  if (keyCode == 37) {
    isLeft = false;
  } else if (keyCode == 39) {
    // console.log("Right Arrow");
    isRight = false;
  }
}

function drawClouds() {
  for (var i = 0; i < clouds.length; i++) {
    fill(255, 255, 255);
    ellipse(
      clouds[i].x_pos,
      clouds[i].y_pos - 50,
      clouds[i].width + 30,
      clouds[i].width + 30
    );
    ellipse(
      clouds[i].x_pos - 40,
      clouds[i].y_pos - 50,
      clouds[i].width + 10,
      clouds[i].width + 10
    );
    ellipse(
      clouds[i].x_pos + 40,
      clouds[i].y_pos - 50,
      clouds[i].width + 10,
      clouds[i].width + 10
    );
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
    fill(120, 100, 40);
    rect(trees_x[i], treePos_y, 60, 150);

    fill(0, 155, 0);
    triangle(
      trees_x[i] - 50,
      treePos_y + 50,
      trees_x[i] + 30,
      treePos_y - 50,
      trees_x[i] + 110,
      treePos_y + 50
    );
    triangle(
      trees_x[i] - 50,
      treePos_y,
      trees_x[i] + 30,
      treePos_y - 100,
      trees_x[i] + 110,
      treePos_y
    );
  }
}

function drawCollectable(t_collectable) {
  if (!t_collectable.isFound) {
    fill(237, 194, 66);
    ellipse(
      t_collectable.x_pos,
      t_collectable.y_pos,
      t_collectable.size,
      t_collectable.size
    );
    fill(225, 160, 52);
    ellipse(
      t_collectable.x_pos,
      t_collectable.y_pos,
      t_collectable.size - 10,
      t_collectable.size - 10
    );
    fill(255, 255, 255);
    textSize(20);
    text("C", t_collectable.x_pos - 5, t_collectable.y_pos + 5);
  }
}

function drawCanyon(t_canyon) {
  fill(230, 170, 20);
  rect(canyon.x_pos, floorPos_y, canyon.width, height - floorPos_y);
}
