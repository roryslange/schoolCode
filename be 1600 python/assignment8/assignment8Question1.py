txt = '*'

print('first nested loop')
print()

for i in range(7):
    for a in range(1):
        print(txt*i)

print()


print('second nested loop')

print()

for i in range(7,0,-1):
    for a in range(1):
        print(txt*i)