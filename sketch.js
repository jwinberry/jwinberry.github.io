function setup() {
  createCanvas(windowWidth, windowHeight);
}



function draw() {
    if (mouseIsPressed) {
        colorMode(RGB);
        fill(random(255), random(255), random(255), random(200));
        
    } else {
        fill(255);
    }
    
    ellipse(mouseX,mouseY, 80,80);
}
