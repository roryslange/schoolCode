ask = 'y'

while ask == 'y':
    num1 = int(input('enter a number: '))
    num2 = int(input('enter another number: '))

    sum = num1 + num2

    print('the sum of your two numbers is: ', sum)
    ask = input('do you want to do it again (y/n)? ')
    