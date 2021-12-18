f = open('tempcov.txt', 'w')

f.write('Farenheit Celsius\n')

for i in range(-10, 11):
    c = (i - 32) * (5/9)
    f.write('{0:10s}{1:15.3s}'.format(str(i), str(c)))
    f.write('\n')