 function setup() {
  createCanvas(windowWidth, windowHeight);
 
}



function draw() {
    if (mouseIsPressed) {
        fill(0);
        
    } else {
        fill(255);
    }
    
    quad(x1,y1,x2,y2,x3,y3,x4,y4);
}





function draw() {
    if (mouseIsPressed) {
        colorMode(HSB, 300, 100, 100);
        fill(random(255), random(255), random(255), random(200));
        
        
    } else {
        colorMode(RGB);
        fill(random(255), random(255), random(255), random(200));
        
    }
    ellipse(random(windowWidth), random(windowHeight), random(150), random(175));
}
