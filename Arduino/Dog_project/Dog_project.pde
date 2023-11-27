int diameter = 1;
void setup() {
  size (900,900);
rect(205, 250, 200, 90);

}
void draw() {
  background(255);
  if (mousePressed == true && mouseX >205 && mouseX < 405
    && mouseY > 250 && mouseY <340) { 
      diameter = diameter + 1;
       ellipse(505,308,diameter+300,diameter+60); //body
    }
  ellipseMode(CENTER);
  fill(102,51,0); //brown
  ellipse(400,350,45,100); //leg 1
  ellipse(650,350,45,100); //leg 4
  ellipse(450,350,45,100); //leg 2
  ellipse(600,350,45,100); //leg 3
  ellipse(665,260,45,100); //tail
  ellipse(505,308,diameter+300,diameter+60); //body
  rect(205, 250, 200, 90); //head
  fill(0); //black
  ellipse( 225,275,40,60); //eye left
  ellipse( 275,275,40,60); //eye right
  fill(245,138,177); //pink
  ellipse( 250,350,40,60); //mouth
  fill(118,28,46); //food
  ellipse(pmouseX, pmouseY, 100,50); //follow food
  
  
  
}
