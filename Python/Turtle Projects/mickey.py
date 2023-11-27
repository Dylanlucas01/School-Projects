
from turtle import Turtle
def main():
    t = Turtle()
    t.hideturtle()
    t.speed(10)
    face(t)
    eyes(t)
    ears(t)

def face(t):
    t.up()
    t.home()
    t.setheading(270)
    t.forward(125)
    t.setheading(0)
    t.down()
    t.begin_fill()
    t.fillcolor("blue")
    t.circle(125)
    t.end_fill()

def eyes(t):
    t.up()
    t.home()
    t.forward(50)
    t.setheading(90)
    t.forward(15)
    t.setheading(0)
    t.down()
    t.begin_fill()
    t.fillcolor("red")
    t.circle(25)
    t.end_fill()

    t.up()
    t.home()
    t.setheading(180)
    t.forward(50)
    t.setheading(90)
    t.forward(15)
    t.setheading(0)
    t.down()
    t.begin_fill()
    t.fillcolor("red")
    t.circle(25)
    t.end_fill()

def ears(t):
    t.up()
    t.home()
    t.forward(125)
    t.setheading(90)
    t.forward(75)
    t.setheading(0)
    t.down()
    t.begin_fill()
    t.fillcolor("red")
    t.circle(62.5)
    t.end_fill()

    t.up()
    t.home()
    t.setheading(180)
    t.forward(125)
    t.setheading(90)
    t.forward(75)
    t.setheading(0)
    t.down()
    t.begin_fill()
    t.fillcolor("red")
    t.circle(62.5)
    t.end_fill()


if __name__ == "__main__":
	main()

