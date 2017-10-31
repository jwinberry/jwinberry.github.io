function setup() {
  createCanvas(windowWidth, windowHeight);
}

c = color(255, 204, 0)

function draw() {
    if (mouseIsPressed) {
        fill(c);
        
    } else {
        fill(255);
    }
    
    ellipse(mouseX,mouseY, 80,80);
}
