#boolean operators

#or and and
    #or and and compare two or more boolean statements
    #or requires 1 to be true, and requires all to be true

#not operator returns true to false and false to true
    #make sure to use expression around statement

#if conditional statements

val = 15
if val > 10:
    print("5 > 10")
    print()
    val = val+1

#prints 5 > 10 if val > 10
#else

else:
    print("5 < 10")

print()
print()
print()

#anything else other than false falls under the 'else' function

#counts positive and negative numbers

n = 0       #accumulator variables because they we keep counting and adding to them
p = 0
for i in range(-10, 5):
    if (i >= 0):
        p = p + 1
    else:       #elif(i < 0) still works here because it is the same thing
        n = n + 1

print("number of positive values ", p)
print("number of negative values", n)

#make sure when you make bigger programs you take into consideration how much time and memory
#the program uses

# put this in a funciton

def positiveNegative(a,b):
    n = 0       #accumulator variables because they we keep counting and adding to them
    p = 0
    for i in range(-10, 5):
        if (i >= 0):
            p = p + 1
        else:       #elif(i < 0) still works here because it is the same thing
            n = n + 1

    print("number of positive values ", p)
    print("number of negative values", n)

positiveNegative(5, 10)