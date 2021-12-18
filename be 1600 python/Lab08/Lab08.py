import random 

userInput = 1
def menu(userInput):

    global questions
    global correct
    
    questions = 0
    correct = 0

    while userInput == 1:
        print('welcome to math practice')
        print('enter 1 for addition')
        print('enter 9 to exit the test')
        userInput = int(input())
        print()

        if userInput == 1:
            value1 = random.randint(1, 9)
            value2 = random.randint(1, 9)
            print('what is', value1, '+', value2, '?', end=" ")
            answer = int(input())
            if answer == value1 + value2:
                print('you are correct')
                questions += 1
                correct += 1
            else:
                print('you are wrong')
                questions += 1
        print()

menu(userInput)

print('number of questions: ', questions)
print('number of correct answers: ', correct)
