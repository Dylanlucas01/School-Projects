void setup() {
  size(400,400);
  strokeWeight(5);
  background(140,40,235); 
}

void draw() {
  if (mousePressed == true)
  stroke(95,200,80);
  line(mouseX,mouseY,200,200);
  if (mousePressed == false)
  stroke(205,20,150);
  line(mouseX,mouseY,200,200);
}
