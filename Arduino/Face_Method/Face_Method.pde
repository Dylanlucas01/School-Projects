int eyeSize = 20;
int headsize = 100;

void setup() {
  size(500,500);
  
  for(int i = 0; i < 10; i++) {
    //face(250, 50 + 100*i);
  }
    
}

void draw() {
  face(250,250,400,300);
}

void face(float x, float y, int eyesize, int headsize) {
  ellipseMode(CENTER);
  fill(220,100,150);
  ellipse(x,y,headsize,headsize); // head
  fill(120,100,150);
  ellipse(x-20,y-20,eyeSize, eyeSize); // eye 
  ellipse(x+20,y-20, eyeSize, eyeSize); // eye
  fill(150,70,200);
  ellipse(x,y+20,40,40); // mouth
}

