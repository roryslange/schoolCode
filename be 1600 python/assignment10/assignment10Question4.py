def exponent(x, y):
    if y == 0:
        return 1
    elif y == 1:
        return x
    else:
        return x * exponent(x, y-1)


print(exponent(4, 2))