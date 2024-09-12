# Q. Write a python program to display as follows
# 1. if a number is divisible by 3 display 'Hello'
# 2. if a number is divisible by 5 display 'Hi'
# 3. if a number is divisible by 3 and 5 display 'Hi' and 'Hello'

num = int(input("Enter number: "))
if num % 3 == 0 and num % 5 == 0:
    print("Hello, Hi")

elif num % 3 == 0:
    print("Hello")

elif num % 5 == 0:
    print("Hi")
