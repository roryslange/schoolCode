dict1 = {'Marty': 'Stepp',
 'Stuart': 'Reges',
  'Jessica': 'Wolk',
   'Allison': 'Reges',
    'Hal': 'Perkins'}

print(dict1)

def is_unique(dict1):
    list1 = []
    true_string = ''
    for i in dict1.values():
        list1 += [i]

    list1.sort()
    

    for i in list1:
        if list1.count(i) > 1:
            list1.clear()
            true_string = 'False'
        else:
            true_string = 'True'

    return print('dict1 - is_unique: ', true_string)


is_unique(dict1)