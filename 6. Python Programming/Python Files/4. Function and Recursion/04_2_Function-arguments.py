# Python supports various types of arguments that can be passed at the time of the function call. In Python, we have the following 4 types of function arguments.
# 1. Default argument
# 2. Keyword arguments (named arguments)
# 3. Positional arguments
# 4. Arbitrary arguments (variable-length arguments *args and **kwargs)

# 1. Default arguments
# def avg(a = 2, b = 4):
#     print("The average of the number is : ", (a + b)/2)
# avg(6, 4)
# avg()

# 2. Keyword argument
# def name(firstName, lastName):
#     print("First Name: ", firstName)
#     print("Last Name: ", lastName)
# name(firstName="Ashish", lastName="Kothari")
# name(lastName="Kothari", firstName="Ashish")

# 3. Positional argument
# def name(firstName, lastName):
#     print("First Name: ", firstName)
#     print("Last Name: ", lastName)
# name("Ashish", "Kothari")
# name("Kothari","Ashish")

# 4. Arbitrary Keyword  Arguments
def avg(*number):# Tuple
    sum = 0
    print(type(number))# tuple
    for i in number:
        sum = sum+i
    print("The average of the number is : ", sum/2)

def name(**names):# Dictonary
    print(type(name))# dictonary
    print(names["a"])
    print(names["b"])

name(a = "Ashish", b = "Kothari")