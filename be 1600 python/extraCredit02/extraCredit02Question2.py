#open file
#dictionary of each team (key) and how many times they won(value)
#also create a dictionary that has years (keys) and which team won (value)
#prompt user for year 1903-2009, display which team won and how many times they have won

year = int(input('Enter a year in the range 1903-2009:'))

def victories(f):

    #shows how many times a line shows up within a .txt file

    victoryDict = {}
    for aline in f:
        if victoryDict.get(aline.strip(), -1) == -1:
            victoryDict[aline.strip()] = 1
        else:
            victoryDict[aline.strip()] += 1
    

        
    # print(victoryDict)
    return victoryDict

def years(f):

    #gives years to the teams in the text file

    yearDict = {}
    startYear = 1903

    for aline in f:
        yearDict[startYear] = aline.strip()
        startYear += 1

    return yearDict


yeardict = years(open('WorldSeries.txt', 'r'))
victorydict = victories(open('WorldSeries.txt', 'r'))



if year > 2004 or year < 1903:
    print('the data for year', year, 'is not included in our database')
elif year == 1904 or year == 1994:
    print('the world series wasnt played in', year)
else:
    print('the team that won the world series in', year, 'is the', yeardict[year])
    print('they won the world series', victorydict[yeardict[year]], 'times')
