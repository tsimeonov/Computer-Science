function setup () {
    createCanvas(500,500)
    background(0)
    stroke(255)
    noFill()

    // Start the recursion
    recurse(width/2, height/2, 400)
}

function recurse (x,y, scale) {

    if (scale < 5 ) {
        return
    }

    ellipse(x,y,scale)

    recurse(x,y, scale * 0.75)
}