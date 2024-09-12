# 1. Write a python program to check if a value entered by a user is Palindrome or not.

def isPalindrome(str):
    return str == str[::-1]
  
# Driver code
str = "malayalam"
ans = isPalindrome(str)
 
if ans:
    print("Yes")

else:
    print("No")