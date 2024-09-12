# Q. Write a program to calculate room charge on the basis of the following conditions
# 1. User will provide cost of room
# 2. 20% discount for more than 2 room
# 3. 10% discount if room is booked for more than 2 days.
# 4. 10% sale tax after discount.


cost = int(input("Enter cost: "))
rooms = int(input("Enter no. of rooms: "))
days = int(input("Enter no. of days: "))
if(rooms > 2 and days > 2):
    cost = cost - ((cost * 20)/100 + (cost * 10)/100) + (cost * 10)/100
    bill = cost * rooms * days
    print("Your bill is: ", bill)

elif(rooms > 2 and days <= 2):
    cost = cost - (cost * 20)/100 + (cost * 10)/100
    bill = cost * rooms * days
    print("Your bill is: ", bill)

elif(rooms <= 2 and days > 2):
    cost = cost - (cost * 10)/100 + (cost * 10)/100
    bill = cost * rooms * days
    print("Your bill is: ", bill)

else:
    cost = cost + (cost * 10)/100
    bill = cost * rooms * days
    print("Your bill is: ", bill)