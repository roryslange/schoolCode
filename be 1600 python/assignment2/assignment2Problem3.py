import random

even = 0
odd = 0

for i in range(1,101):
    a = random.randrange(0, 101)
    if a % 2 == 1:
        odd = odd + 1
    else:
        even = even + 1

print("Out of 100 random numbers, ", odd, " were odd, ", even, " were even.")