def count(x):
    if x == 1:
        print(x)
    elif x == 0:
        pass
    else:
        print(x)
        count(x-1)

count(5)