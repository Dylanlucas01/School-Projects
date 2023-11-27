void setup () {
  size(250,200);
  strokeWeight(1);
}

void draw() {
  background(140,40,235); 
  if(keyPressed == false) { 
    // says "Key Not Pressed!" when key is not pressed
    fill(15,185,15); 
    textSize(20);
    text("Key Not Pressed!",40,100);
      }
  if (keyPressed == true) {
    // says "Key Pressed!" when key is pressed
    fill(15,185,15); 
    textSize(20);
    text("Key Pressed!",40,100);
    text(key,90,150);
    if(key == 'a' || key =='b') {
      fill(220,0,0);
      ellipse(100,40,30,30);
      
    }
  }
}
