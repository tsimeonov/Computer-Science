var base_x;
var base_y;
var stem_h;

function setup() {
  createCanvas(1000, 500);
  base_x = width / 2;
  base_y = height - 50;
  stem_h = 300;
  background(150, 150, 250);

  for (let i = 0; i < 10; i++) {
    drawFlower(i * random(0,300), i * random(70,90),300)
  }
}

function drawFlower(x,y,h) {
  //draw a flower
  noFill();
  strokeWeight(10);
  stroke(0, 200, 50);
  curve(
    x + 200,
    y + 100,
    x,
    y,
    x,
    y - h,
    x - 200,
    y - (h + 100)
  );

  noStroke();
  fill(255, 255, 0);
  ellipse(x + 45, y - h, 70, 50);
  ellipse(x - 45, y - h, 70, 50);
  ellipse(x, y + 45 - h, 50, 70);
  ellipse(x, y - 45 - h, 50, 70);

  //draw the center
  fill(255, 100, 0);
  ellipse(x, y - h, 50, 50);
}
