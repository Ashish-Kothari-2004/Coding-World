# Q. Write a program to swap two number also ensure that both the numbers are of same digit.

n1 = int (input("Enter first number: "))
n2 = int (input("Enter second number: "))
num1 = n1
num2 = n2
count1 = 0
count2 = 0
while(num1 > 0):
    count1 = count1 + 1
    num1 = num1//10

while(num2 > 0):
    count2 = count2 + 1
    num2 = num2//10

if(count1 == count2):
    t = n1
    n1 = n2
    n2 = t
    print("After swapping the first number is ", n1)
    print("After swapping the second number is ", n2)
else:
    print("Please enter number with same digit")