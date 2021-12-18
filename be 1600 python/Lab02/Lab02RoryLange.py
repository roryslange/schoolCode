#created by rory lange on 9/23/2020 for Python Lab02
#prints all numbers

firstNum = 3
secondNum = 12

print("print numbers: ")

for i in range(firstNum, secondNum):
    print(i, end=" ")

print()
print()

#prints odd numbers

print("print odd numbers: ")

for i in range(firstNum, secondNum):
    if i % 2 == 1:
        print(i, end=" ")

print()
print()

#prints sum of odd numbers
print("sum of all odd numbers: ")
i = 0
a = 0
for i in range(firstNum, secondNum):
    if i % 2 == 1:
        a = a + i

print(a)
print()

#print sum of the square of odd numbers

print("print sum of the square of all odd numbers:")
i = 0
a = 0
for i in range(firstNum, secondNum):
    if i % 2 == 1:
        i = i**2
        a = float(a + i)

print(a)

print()

#prints numbers and their squares

print("print numbers and their squares:")
for i in range(1, 11):
    print(i, " ", i**2)

