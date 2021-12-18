originalList = ['how', 'are', 'you?']


def double_list(originalList):
    doubleList = []
    for i in originalList:
        doubleList = doubleList + [i] + [i]
    
    print(doubleList)

double_list(originalList)
