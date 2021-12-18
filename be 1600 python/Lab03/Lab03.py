import random

weight = random.randint(1,50)
cost = 0

if weight <= 2:
    rate = 1.10
    cost = 1.10 * weight
    print("package weight: ", weight)
    print("shipping rate: #", rate)
    print("shipping charge: $", cost)
elif weight > 2 and weight <= 6:
    rate = 2.20
    cost = 2.20 * weight
    print("package weight: ", weight)
    print("shipping rate: $", rate)
    print("shipping charge: $", cost)
elif weight > 6 and weight <= 10:
    rate = 3.70
    cost = 3.70 * weight
    print("package weight: ", weight)
    print("shipping rate: $", rate)
    print("shipping charge: $", cost)
elif weight > 10 and weight < 20:
    rate = 4.50
    cost = 4.50 * weight
    print("package weight: ", weight)
    print("shipping rate: $", rate)
    print("shipping charge: $", cost)
else:
    print("package weight: ", weight)
    print("package cannot be shipped, it is over 20 pounds")

