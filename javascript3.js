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





