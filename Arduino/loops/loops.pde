
void setup() {
  size (400,400);
  for(int i = 0; i < 10; i++) {
   house(100, 200 + 4*i);
  }
}
void draw() {
  house(100,200);
}

void house(float x, float y) {
  rect(100,100,250,250);
  triangle(100,100,225,25,350,100);
  rect(200,200,50,150);
}
