x = int(input("Enter the value of x : "))
match x :
    case 0:
        print("No. is 0")
    case 1:
        print("No. is 1")
    case 2:
        print("No. is 2")
    case 3:
        print("No. is 3")
    case _ if (x > 3):# Default case with condition
        print("x greater than 3")
    case _:# Default case 
        print("x is less than 0")