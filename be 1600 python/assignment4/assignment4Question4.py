mainList = []

for i in range(10):
    num = int(input('Enter a number: '))
    mainList.append(num)

def total(mainList):
    totalList = sum(mainList)
    # for i in mainList:
    #     totalList = totalList + i
    return totalList

def mean(mainList):
    meanList = sum(mainList) / len(mainList)
    # for i in mainList:
    #     meanList = meanList + i
    # meanList = meanList / len(mainList)
    return meanList

mainList.sort()

print('Low: ', mainList[0])
print('High: ', mainList[-1])
print('Total: ', total(mainList))
print('Average: ', mean(mainList))



print(mainList)
