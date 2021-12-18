str = ''
char = ''


def word_count(str):
    x = 1
    for i in range(len(str)):
        if str[i] == ' ':
            x = x + 1
    if str[0] == " ":
        x = x - 1
    if str[len(str) - 1] == " ":
        x = x - 1

    print(str, " -> ", x)

word_count(' this string has wide spaces ')