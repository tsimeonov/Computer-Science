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
var isFalling;
var isPlummeting;

function setup() {
  createCanvas(1024, 576);
  floorPos_y = (height * 3) / 4;
  gameChar_x = width / 2;
  gameChar_y = floorPos_y;

  isLeft = false;
  isRight = false;
  isFalling = false;
  isPlummeting = false;
}

function draw() {
  ///////////DRAWING CODE//////////

  background(100, 155, 255); //fill the sky blue

  noStroke();
  fill(0, 155, 0);
  rect(0, floorPos_y, width, height - floorPos_y); //draw some green ground

  //draw the canyon

  //the game character
  if (isLeft && isFalling) {
    // add your jumping-left code
    // The head
    fill(200, 150, 150);
    ellipse(gameChar_x, gameChar_y - 50, 25);

    // The body
    fill(255, 0, 0);
    rect(gameChar_x - 9, gameChar_y - 38, 18, 30);

    // The Legs
    fill(0);
    rect(gameChar_x - 7, gameChar_y - 7, 10, 10);
    rect(gameChar_x + 2, gameChar_y - 7, 10, 10);

    // The arms
    fill(200, 150, 150);
    rect(gameChar_x + 4, gameChar_y - 30, 10, 10);
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

  ///////////INTERACTION CODE//////////
  //Put conditional statements to move the game character below here
  if (isLeft == true) {
    gameChar_x -= 5;
  }

  if (isRight == true) {
    gameChar_x += 5;
  }

  // Add gravity
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

  if (keyCode == 37) {
    console.log("Left arrow");
    isLeft = true;
  } else if (keyCode == 39) {
    console.log("Right arrow");
    isRight = true;
  }

  // Prevent the character from double jumping
  else if (keyCode == 87 || keyCode == 38) {
    if (!isFalling && !isPlummeting) {
      gameChar_y -= 100;
    }
  }
}

function keyReleased() {
  // if statements to control the animation of the character when
  // keys are released.

  console.log("keyReleased: " + key);
  console.log("keyReleased: " + keyCode);

  if (keyCode == 37) {
    console.log("Left arrow");
    isLeft = false;
  } else if (keyCode == 39) {
    console.log("Right arrow");
    isRight = false;
  }
}
