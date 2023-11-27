size(200,200);
background(255);
noFill();
ellipseMode(CENTER);

for(int i = 1; i <11; i++) {
 ellipse(100,100, 20*i, 20*i);
  rect(20,20, 20*i, 20*i);
  println("Value of i: " + i);
  println("Width/height of ellipse: " + (20*i));
}
