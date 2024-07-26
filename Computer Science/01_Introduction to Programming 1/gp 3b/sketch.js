/*

The Game Project

Week 3

Game interaction

*/

var gameChar_x;
var gameChar_y;
var floorPos_y;

var isLeft;
var isRight;
var isPlummeting;

var isFalling;

var collectable;

function setup() {
  createCanvas(1024, 576);
  floorPos_y = (height * 3) / 4;
  gameChar_x = width / 2;
  gameChar_y = floorPos_y;

  isLeft = false;
  isRight = false;
  isFalling = false;
  isPlummeting = false;

  collectable = { x_pos: 100, y_pos: 100, size: 50, isFound: false };

  canyon = { x_pos: 0, width: 100 };
}

function draw() {
  ///////////DRAWING CODE//////////

  background(100, 155, 255); //fill the sky blue

  noStroke();
  fill(0, 155, 0);
  rect(0, floorPos_y, width, height - floorPos_y); //draw some green ground

  // Collectable
  if (gameChar_x < collectable.y_pos) {
    collectable.isFound = true;
  }

  if (collectable.isFound == false) {
    fill(237, 194, 66);
    ellipse(
      collectable.x_pos - 50,
      collectable.y_pos + 300,
      collectable.size - 10,
      collectable.size - 10
    );
    fill(225, 160, 52);

    ellipse(
      collectable.x_pos - 50,
      collectable.y_pos + 300,
      collectable.size - 20,
      collectable.size - 20
    );
    fill(255, 255, 255);
    text("C", collectable.x_pos - 55, collectable.y_pos + 305);
  }

  // Draw the canyon
  fill(230, 170, 20);
  rect(canyon.x_pos + canyon.width, 430, 80, 150);

  // The game character
  if (isLeft && isFalling) {
    // add your jumping-left code
  } else if (isRight && isFalling) {
    // add your jumping-right code
  } else if (isLeft) {
    // add your walking left code
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
  } else if (isRight) {
    // add your walking right code
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
  } else if (isFalling || isPlummeting) {
    // add your jumping facing forwards code
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
  } else {
    // add your standing front facing code
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

  if (gameChar_x < 162 && gameChar_x > 100) {
    isPlummeting = true;
    console.log("Down the canyon");
    gameChar_y += 10;
  } else {
    isPlummeting = false;
    if (gameChar_y > floorPos_y) {
      gameChar_y = floorPos_y;
    }
  }

  ///////////INTERACTION CODE//////////
  //Put conditional statements to move the game character below here
  if (isLeft == true) {
    gameChar_x -= 5;
  }

  if (isRight == true) {
    gameChar_x += 5;
  }

  if (gameChar_y < floorPos_y) {
    gameChar_y += 5;
    isFalling = true;
  } else {
    isFalling = false;
  }
}

function keyPressed() {
  // if statements to control the animation of the character when
  // keys are pressed.

  //open up the console to see how these work
  console.log("keyPressed: " + key);
  console.log("keyPressed: " + keyCode);

  if (!isPlummeting) {
    if (keyCode == 37) {
      console.log("Left arrow");
      console.log(gameChar_x);
      console.log(`isPlummeting: ${isPlummeting}`);
      isLeft = true;
    } else if (keyCode == 39) {
      console.log("Right Arrow");
      isRight = true;
      console.log(`isPlummeting: ${isPlummeting}`);
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
  // if statements to control the animation of the character when
  // keys are released.

  console.log("keyReleased: " + key);
  console.log("keyReleased: " + keyCode);

  if (keyCode == 37) {
    isLeft = false;
  } else if (keyCode == 39) {
    console.log("Right Arrow");
    isRight = false;
  }
}
