import turtle
import math

def draw(t, x):
    for i in range(-100, 100):
        x = x+1
        t.goto(math.sqrt(x), x)
    t.up()
    t.goto(0, 0)
    t.down()
    x = 0
    for i in range(-100, 100):
        x = x+1
        t.goto(-math.sqrt(x), x)

t = turtle.Turtle()

draw(t, 0)