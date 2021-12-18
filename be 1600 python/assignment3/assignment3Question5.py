str = input('Enter a string: ')


def vowelCounter(str):
    vowels = 0

    for i in range(len(str)):
        if str[i] == 'a' or str[i] == 'e' or str[i] == 'i' or str[i] == 'o' or str[i] == 'u' or str[i] == 'A' or str[i] == 'E' or str[i] == 'I' or str[i] == 'O' or str[i] == 'U':
            vowels = vowels + 1
    return vowels

def consonantCounter(str):
    consonant = 0

    for i in range(len(str)):
        if str[i] != 'a' and str[i] != 'e' and str[i] != 'i' and str[i] != 'o' and str[i] !='u' and str[i] != 'A' and str[i] != 'E' and str[i] != 'I' and str[i] != 'O' and str[i] != 'U':
            consonant = consonant + 1
    return consonant

    
# print(vowelCounter(str), 'vowels')
# print(consonantCounter(str), "consonsants")



print('the string you entered has', vowelCounter(str), 'vowels and', consonantCounter(str), 'consonants.')