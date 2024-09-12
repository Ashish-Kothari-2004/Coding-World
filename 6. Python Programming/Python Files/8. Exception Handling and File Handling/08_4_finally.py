# Finally Keyword in Python: 
# Python provides a keyword finally, which is always executed after the try and except blocks. The final block always executes after the normal termination of the try block or after the try block terminates due to some exception.
def printElement(l, i):
    try: 
        print(l[i])
        return 1 # It will return 1 right after finally block is executed
    except Exception as e: 
        print(e)
        return 0 # It will return 0 right after finally block is executed
    finally: 
        print("I am always executed !")

    print("I will execute or not ? ") # Ans: No

l = [2, 5, 7, 2]
i = int(input("Enter index: "))
a = printElement(l, i)
print(a)