import math

def inCircle(x, y, circradius):
    radius = math.sqrt(x**2 + y**2)

    if radius <= circradius:
        print("Point (", x, ", ", y, ")", "is in circle with radius ", circradius)
    else:
        print("Point (", x, ", ", y, ")", "is not in circle with radius ", circradius)

inCircle(10, 10, 8)
