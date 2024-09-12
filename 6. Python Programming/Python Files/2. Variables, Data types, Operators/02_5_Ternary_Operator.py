# age = 23
# drive = False
# drive = True if age > 18 else False
# print("Driving Result: ", drive)

age = int(input("Enter age: "))
vote = ("No", "Yes")[age >= 18]
print(vote)