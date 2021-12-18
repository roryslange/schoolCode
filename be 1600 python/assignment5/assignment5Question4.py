room = {'CS101':'3004', 'CS102':'4501', 'CS103':'6775', 'NT110':'1244', 'CM241':'1411'}
instructor = {'CS101':'Haynes', 'CS102':'Alvarado', 'CS103':'Rich', 'NT110':'Burke', 'CM241':'Lee'}
time = {'CS101':'8:00 a.m.', 'CS102':'9:00 a.m.', 'CS103':'10:00 a.m.', 'NT110':'11:00 a.m.', 'CM241':'1.00 p.m.'}
name = ['CS101', 'CS102', 'CS103', 'NT110', 'CM241']

def courseFind(room,instructor,time):
    course = input('Enter a course number: ')

    if name.count(course) == 1:
        for i in name:
            if course == i:
                print('The details for course', i, 'are:')
                print('Room:', room[i])
                print('Instructor:', instructor[i])
                print('Time:', time[i])
    else:
        print(course, 'is an invalid course number')

courseFind(room, instructor, time)