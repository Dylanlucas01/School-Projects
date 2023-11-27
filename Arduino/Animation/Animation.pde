float x=100;
float y=100;

void setup(){
  size(200,200);
  noStroke();
}

void draw(){
  background(100,100,200);
  rectangle();
  move();
  
}

void rectangle() {
  fill(100,220,30);
  rect(x,y,30,10);
}

void move() {
  x=x+1;
  y=y+1; 
  if(x>width) {
    x=-30;
    y=-30;
  }
}
