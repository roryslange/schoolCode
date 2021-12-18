import random

k = random.randint(2,10)

def collapse(k):
    lis = []
    newList = []

    print('enter', k, 'values.')
    for i in range(k):
        lis = lis + [int(input('enter value: '))]

    for i in range(1,k,2):
        newList = newList + [lis[i] + lis[i-1]]

    if k % 2 == 1:
        newList = newList + [lis[-1]]

    print('old list: ', lis)
    print('collapsed list: ',newList)

collapse(k)