void setup() {
  size(400,400);
  strokeWeight(1);
}

void draw() {
  background(100,200,150);
  if (keyPressed == true) {
  if(key == 'z') {
    println("Hi, I'm uber cool.");
  }
  if(key == 'c' || key == 'v') {
    fill(33,210,232);
    rect(200,150,150,200);
    }
  }
}

