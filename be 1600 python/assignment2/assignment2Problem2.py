value = float(0)
sum = float(0)

for i in range(1, 31):
    top = i
    bottom = 31 - i
    value = top/bottom
    sum = sum + value

print(sum)
