str = ''


def swap_pairs(str):
    global z
    for i in range(0, len(str) - 1, 2):
        z = z + str[i+1] + str[i]

    if len(str) %2 == 1:
        z = z + str[len(str) - 1]
    return z

swap_pairs('example')

print(z)


