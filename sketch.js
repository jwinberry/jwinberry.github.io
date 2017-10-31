function setup() {
  createCanvas(windowWidth, windowHeight);
}

function draw() {
    if (mouseIsPressed) {
        fill(#FA8072);
        
    } else {
        fill(255);
    }
    
    ellipse(mouseX,mouseY, 80,80);
}
