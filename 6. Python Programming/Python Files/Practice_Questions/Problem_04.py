# Q. Write a program to find largest of 3 numbers.

n1 = int(input("Enter first number: "))
n2 = int(input("Enter second number: "))
n3 = int(input("Enter Third number: "))
if n1 > n2 and n1 > n3:
    print("Largest number is : ", n1)
elif n2 > n3:
    print("Largest number is ", n2)
else:
    print("Largest number is ", n3)

