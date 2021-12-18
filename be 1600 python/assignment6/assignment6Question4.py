r = open('thisFile.txt', 'r')
f = open('thatFile.txt', 'w')
lines = r.readlines()

# print(lines)

for i in range(len(lines)):
    if i % 2 == 0:
        f.write(lines[i])
    