
import random
from turtle import Turtle
t = Turtle()
t.hideturtle()
t.speed(10)
for count in range(5):
    t.begin_fill()
    r = random.random()
    g = random.random()
    b = random.random()
    t.fillcolor(r,g,b)
    for count in range(6):
       t.forward(100)
       t.left(60)
    t.left(360/5)
    t.end_fill()
t.up()
t.right(90)
t.forward(25)
t.right(90)
t.forward(25)
t.setheading(0)
t.down()
t.begin_fill()
t.fillcolor("blue")
for count in range(4):
    t.forward(50)
    t.left(90)
t.end_fill()
pause
