var myRect;

function setup()
{
    createCanvas(800, 600);
    myRect = {
        x: 100,
        y: 100,
        width: 200,
        height: 300,
        drawRect: function() {
            rect(this.x, this.y, this.width, this.height)
        }
    }
}

function draw()
{
    fill(0,200,0)
    myRect.drawRect()
}