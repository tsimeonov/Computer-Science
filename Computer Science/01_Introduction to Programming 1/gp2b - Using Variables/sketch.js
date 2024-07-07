/*

The Game Project

2b - using variables

*/

var floorPos_y;

var gameChar_x;
var gameChar_y;

var treePos_x;
var treePos_y;

var canyon;
var collectable;

var mountain;
var cloud;

function setup() {
  createCanvas(1024, 576);
  floorPos_y = 432; //NB. we are now using a variable for the floor position

  //NB. We are now using the built in variables height and width
  gameChar_x = width / 2;
  gameChar_y = floorPos_y;

  treePos_x = width / 2;
  treePos_y = height / 2;

  canyon = { x_pos: 0, width: 100 };

  collectable = { x_pos: 100, y_pos: 100, size: 50 };

  cloud = { x_pos: 100, y_pos: 100, width: 50 };

  mountain = { x_pos: 100, y_pos: 100 };
}

function draw() {
  background(100, 155, 255); //fill the sky blue

  noStroke();
  fill(0, 155, 0);
  rect(0, floorPos_y, height, width - floorPos_y); //draw some green ground

  // Draw the game character

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

  // The Tree
  fill(120, 100, 40);
  rect(treePos_x, treePos_y, 60, 150);

  // branches
  fill(0, 155, 0);
  triangle(
    treePos_x - 50,
    treePos_y + 50,
    treePos_x + 30,
    treePos_y - 50,
    treePos_x + 110,
    treePos_y + 50
  );
  triangle(
    treePos_x - 50,
    treePos_y,
    treePos_x + 30,
    treePos_y - 100,
    treePos_x + 110,
    treePos_y
  );

  // Canyon
  fill(230, 170, 20);
  rect(canyon.x_pos + canyon.width, 430, 80, 150);

  // Add the collectable
  fill(237, 194, 66);
  //   ellipse(350, 400, 40, 40);
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

  // Cloud
  fill(255, 255, 255);
  ellipse(cloud.x_pos, cloud.y_pos - 50, cloud.width + 30, cloud.width + 30);

  ellipse(
    cloud.x_pos - 40,
    cloud.y_pos - 50,
    cloud.width + 10,
    cloud.width + 10
  );

  ellipse(
    cloud.x_pos + 40,
    cloud.y_pos - 50,
    cloud.width + 10,
    cloud.width + 10
  );

  // mountain

  fill(0, 155, 0);

  triangle(
    mountain.x_pos + 400,
    mountain.y_pos + 340,
    mountain.x_pos + 300,
    mountain.y_pos + 132,
    mountain.x_pos + 140,
    mountain.y_pos + 340
  );

  triangle(
    mountain.x_pos + 200,
    mountain.y_pos + 340,
    mountain.x_pos + 150,
    mountain.y_pos + 250,
    mountain.x_pos + 100,
    mountain.y_pos + 340
  );
}

function mousePressed() {
  gameChar_x = mouseX;
  gameChar_y = mouseY;
}
