import csv

'''

Lists

heart disease
motor vehicle
teen birth
adult smoking
adult obesity

'''

f = open('riskfactors.csv')
r = csv.reader(f)

for i in range(6):
    titles = next(r)

def findCol(colName):
    colNum = 0
    while colNum < len(titles) and titles[colNum] != colName:
        colNum += 1
    
    if colNum == len(titles):
        return -1
    else:
        return colNum

def makeLists():

    global heart
    global vehicle
    global teen
    global smoking
    global obesity
    global states

    heart = []
    vehicle = []
    teen = []
    smoking = []
    obesity = []
    states = []

    for aline in r:
        heart += [aline[findCol('Heart Disease Death Rate (2007)')]]
        vehicle += [aline[findCol('Motor Vehicle Death Rate (2009)')]]
        teen += [aline[findCol('Teen Birth Rate (2009)')]]
        smoking += [aline[findCol('Adult Smoking (2010)')]]
        obesity += [aline[findCol('Adult Obesity (2010)')]]
        states += [aline[0]]



makeLists()



def write_to_txt():
    f = open('assignment9Question1Output.txt', 'w')

    f.write('{0:31}: {1:30}{2}'.format('Indicator', 'Min', 'Max\n'))
    f.write('-----------------------------------------------------------------------------------------\n')
    f.write('{0:31}: {1:15}{2:>10}     {3:15}{4:>10}\n'.format(
        'Heart Disease Death Rate (2007)',states[heart.index(min(heart))], min(heart), states[heart.index(max(heart))], max(heart)))
    f.write('{0:31}: {1:15}{2:>10}     {3:15}{4:>10}\n'.format(
        'Motor Vehicle Death Rate (2009)',states[vehicle.index(min(vehicle))], min(vehicle), states[vehicle.index(max(vehicle))], max(vehicle)))
    f.write('{0:31}: {1:15}{2:>10}     {3:15}{4:>10}\n'.format(
        'Teen Birth Rate (2009)',states[teen.index(min(teen))], min(teen), states[teen.index(max(teen))], max(teen)))
    f.write('{0:31}: {1:15}{2:>10}     {3:15}{4:>10}\n'.format(
        'Adult Smoking (2010)',states[smoking.index(min(smoking))], min(smoking), states[smoking.index(max(smoking))], max(smoking)))
    f.write('{0:31}: {1:15}{2:>10}     {3:15}{4:>10}'.format(
        'Adult Obesity (2010)',states[obesity.index(min(obesity))], min(obesity), states[obesity.index(max(obesity))], max(obesity)))



write_to_txt()