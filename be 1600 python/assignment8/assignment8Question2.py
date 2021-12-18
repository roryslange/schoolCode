rainfall = 0
total = float(0)

for i in range(2):
    print('for year', i+1, ':')
    for a in range(12):
        print('enter the rainfall for the month', a+1, ':', end='')
        rainfall = float(input())
        total += rainfall

print('for 24 months')
print('{0:.2f}'.format(total))
print('mean: {0:.2f}'.format(total/24))