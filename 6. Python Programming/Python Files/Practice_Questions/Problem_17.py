# Q. WAP to find a particular word in a string.

l = input("Enter any string: ").split() # Default separator is ' '
result = False
word = input("Enter any word: ")
for i in l:
    if i == word: 
        result = True
        print("Word is present in the string!!")

if result == False: 
    print("Word is not present")