import random

f = open(input('enter a file name: '), 'w')
num = int(input('enter the number of random numbers to be put in the file: '))

for i in range(num):
    f.write(str(random.randint(1,100)) + '\n')

