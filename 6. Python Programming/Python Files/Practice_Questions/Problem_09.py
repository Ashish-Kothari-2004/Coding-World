# Q. Write a program to calculate notes on the basis of amount provided by user. Display number of notes 100, 50, 20, 10 and coins 5, 2, 1.

amount = int(input("Enter amount: "))
if(amount >= 100):
    h = amount//100
    amount = amount % 100
    print("No of notes(hundred) is: ", h)

if(amount >= 50):
    f = amount//50
    amount = amount % 50
    print("No of notes(fifty) is: ", f)

if(amount >= 20):
    t = amount//20
    amount = amount % 20
    print("No of notes(twenty) is: ", t)

if(amount >= 10):
    t = amount//10
    amount = amount % 10
    print("No of notes(ten) is: ", t)

if(amount >= 5):
    f = amount//5
    amount = amount % 5
    print("No of coins(five) is: ", f)

if(amount >= 2):
    t = amount//2
    amount = amount % 5
    print("No of coins(two) is: ", t)

if(amount >= 1):
    o = amount//1
    amount = amount % 1
    print("No of coins(one) is: ", o)


