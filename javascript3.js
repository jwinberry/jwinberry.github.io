 
function setup() {
  createCanvas(windowWidth, windowHeight);
}



function draw() {
    if (mouseIsPressed) {
        fill(0,255,0,25);
        rect(mouseX, mouseY, random(60), random(60));
        

        
    } else {
        fill(232, 98, 234,random(30));
        ellipse(mouseX,mouseY, random(60),random(60));
    }
    
    
}
