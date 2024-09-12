# Q. Write a program to calculate electricity bill on the basis of the following
# 1. From 1 to 100 units calculate Rs. 10 per unit.
# 2. From 101 to 200 units calculate Rs. 15 per unit.
# 3. From 201 to 300 units calculate Rs. 20 per unit.
# 4. Above 300 calculate Rs. 25 per unit.

units = int(input("Enter units: "))
bill = 0
if(units >= 1 and units <= 100):
    bill = units * 10
    print("Your electricity bill is: ", bill)
elif(units > 100 and units <= 200):
    bill = (100 * 10) + (units - 100) * 15
    print("Your electricity bill is: ", bill)
elif(units > 200 and units <= 300):
    bill = (100 * 10) + (100 * 15) + (units - 200) * 20
    print("Your electricity bill is: ", bill)
elif(units > 300):
    bill = (100 * 10) + (100 * 15) + (100 * 20) + (units - 300) * 25

else:
    print("Please enter valid units.!!!!")