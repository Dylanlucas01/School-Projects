
import random
from turtle import Turtle
t = Turtle()
t.hideturtle()
t.speed(10)
i = .3
for count in range(13):
    t.begin_fill()
    r = i
    g = .002
    b = .004
    t.fillcolor(r,g,b)
    i = i + .05
    for count in range(12):
       t.forward(80)
       t.left(60)
    t.left(360/10)
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
pause
#random.random()