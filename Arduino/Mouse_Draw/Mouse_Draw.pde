void setup () {
  background(255); // set background color: white
  size(400,400); // set canvas size 400 by 400
  strokeWeight(1); // set stroke weight/thickness to 3
  rect(50,50,100,100);
}

void draw() {
  ellipseMode(CENTER);
  //Draws circles inside the rectangle only when mouse is pressed
if (mousePressed == true && mouseX >50 && mouseX < 150
    && mouseY > 50 && mouseY < 150) {
  fill(95,200,80);
 ellipse(mouseX,mouseY, 10, 10); // draw circle at mouse cornets
 line(pmouseX,pmouseY,mouseX,mouseY);
}
  // code that prints out the values of mouseX and mouseY 
println("mouseX: " + mouseX + " , mouseY: " + mouseY);
}
 
