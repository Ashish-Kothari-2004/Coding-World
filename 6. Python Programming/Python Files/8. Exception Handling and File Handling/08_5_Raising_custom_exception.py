a = int(input("Enter any number between 5 and 9: "))
if(a < 5 or a > 9): 
    raise ValueError("Number should be between 5 and 9")
else: 
    print(f"You have entered: {a}")