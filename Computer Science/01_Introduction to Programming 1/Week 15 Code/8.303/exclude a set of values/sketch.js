var circles = []; 

function setup() 
{ 
    createCanvas(800, 600); 
    
    for (var i = 0; i < 4000; i++)
    { 
        circles[i] = floor(random(0, 100)); 
    } 
} 

function draw()
{ 
    //draw the circles to the canvas at a random location use the circles array for sizes ignoring any circle under 10 pixels 16 
    //draw circles in red where they are bigger than 50 and blue otherwise 
} 
