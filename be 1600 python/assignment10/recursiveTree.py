import turtle
import random


def tree(t, trunkLength):
    if trunkLength < 5:     #check for base case
        t.color('green')
        t.dot(10)
        t.color('brown')
        return
    else:
        t.color('brown')
        angle = random.randint(15, 45)
        shrink = random.randint(5, 25)

        t.forward(trunkLength)
        t.right(angle)
        tree(t, trunkLength - shrink)
        t.left(angle*2)
        tree(t, trunkLength - shrink)
        t.right(angle)
        t.backward(trunkLength)


t = turtle.Turtle()
t.left(90)
trunkLength = 100
t.speed(1000)
tree(t, trunkLength)

