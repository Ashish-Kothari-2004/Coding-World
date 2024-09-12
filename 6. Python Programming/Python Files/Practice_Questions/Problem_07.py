# Q. Write a program to make a calculator having 4 function addition, subtraction, multiplication and division.

def addition(n1, n2):
    print("Addition of the given number is: ", n1 + n2)
def subtraction(n1, n2):
    print("Subtraction of the given number is: ", n1 - n2)
def multiplication(n1, n2):
    print("Multiplication of the given number is: ", n1 * n2)
def division(n1, n2):
    print("Division of the given number is: ", n1 / n2)

n1 = int(input("Enter first number: "))
n2 = int(input("Enter second number: "))
n = int(input("Enter you choice!!\n1 for addition\n 2 for subtraction\n 3 for multiplication\n 4 for division: "))
if(n == 1):
    addition((n1, n2))
elif(n ==2):
    subtraction(n1, n2)
elif(n == 3):
    multiplication(n1, n2)
elif(n == 4):
    division(n1, n2)
else:
    print("Please enter valid choice!!!")
