function setup() {
  createCanvas(windowWidth, windowHeight);
}

function draw() {
    if (mouseIsPressed) {
        fill(300);
        
    } else {
        fill(255);
    }
    
    ellipse(mouseX,mouseY, 80,80);
}
