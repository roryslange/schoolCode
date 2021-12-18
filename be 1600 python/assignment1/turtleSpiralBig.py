import turtle

val = 0

def drawSquare(t, i):
    for a in range(4):
        t.forward(i)
        t.right(90)
    

t = turtle.Turtle()

for i in range(100, 0, -10):
    val = val + 1
    drawSquare(t, i)
    t.up()
    t.setpos(val*5, val*-5)
    t.down()