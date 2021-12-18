def mult(x, y):
    if y == 1:
        return x
    else:
        return x + mult(x, y-1)

print(mult(3,5))