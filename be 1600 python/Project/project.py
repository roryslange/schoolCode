#This project was created on november 15, 2020 by rory lange
#enter emails and read emails into system
#using json because it seems easiest to store

'''

steps:

    1) display a menu
    2) look up a persons email
    3) add a new name and email
    4) change an existing email
    5) delete a name and email


'''

import json

dict1 = {
    'name' : {}
}

def write_json(filename, data):
    with open(filename, 'w') as f:
        json.dump(data, f, indent=4)

def edit_json(filename, name, email, add):
    with open(filename, 'r') as f:
        r = json.load(f)

    if add == True:
        r['name'][name] = email
    else:
        if name not in r['name'].keys():
            print('name was not found')
        else:
            del r['name'][name]

    with open(filename, 'w') as f:
            json.dump(r, f, indent=4)

#search for a name and an email, object is what they are searching for
def search(filename, search):
    with open(filename, 'r') as f:
        r = json.load(f)

    if search not in r['name'].keys():
        print('user not found')

    else:
        email = r['name'][search]
        print('Name: ', search)
        print('Email: ', email)

#add new name and email
def add(name, email):
    edit_json('emails.json', name, email, True)
#change existing email
def change(name, email):
    with open('emails.json', 'r') as f:
        r = json.load(f)
    if name not in r['name'].keys():
        print('That user does not exist.')
    else:
        edit_json('emails.json', name, email, True)

#delete an email and name pair
def delete(name):
    email = ''
    edit_json('emails.json', name, email, False)

def save():
    save = open('save.txt', 'w')
    f = open('emails.json', 'r')
    read = json.load(f)
    save.write(str(read))

    save.close()
    f.close()

#happens last, once i have all of the other functions
userinput = 0
def createMenu(userinput):

    while userinput != 5:
        print('Menu')
        print('-------------------------------------------')
        print('1. Look up an email address')
        print('2. Add a new name and email address')
        print('3. Change an existing email address')
        print('4. Delete an existing email address')
        print('5. Quit the program')

        userinput = int(input('Enter your choice: '))

        if userinput == 1:
            search('emails.json', input('Enter a name: '))
        elif userinput == 2:
            add(input('Enter name: '), input('Enter email: '))
        elif userinput == 3:
            change(input('Enter name: '), input('Enter new email: '))
        elif userinput == 4:
            delete(input('Enter name: '))
        elif userinput == 5:
            print('Information saved...')
            save()
            break
        print()

def createJson():
    try:  # if the file doesnt exist then it will run the exeption
        save = open('save.txt', 'r')
    except:
        save = open('save.txt', 'x')
        save.close()
        save = open('save.txt', 'r')
        
    if save.read() == '':
        write_json('emails.json', dict1)

createJson()
createMenu(userinput)

