

def grading(f):
    count = 0
    grade = 0
    answers = ['B','D','A','A','C','A','B','A','C','D','B','C','D','A','D','C','C','B','D','A']
    incorrect = []

    for aline in f:
        if aline.strip() == answers[count]:
            grade = grade + 1
        else:
            incorrect += [count + 1]
        count = count + 1 #use to get index of answer

    if grade > 15: #pass or fail
        print('Congratulations, you passed the exam.')
    else:
        print('Sorry you did not pass the exam')
    print('you answered', grade, 'questions correctly and', 20-grade, 'incorrectly' )
    print('the questions you answered incorrectly are:')
    for i in incorrect:
        print(i, end=' ')

grading(open('student_solution.txt', 'r'))
