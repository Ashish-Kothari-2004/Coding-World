# Python Lists: Python Lists are just like dynamically sized arrays, declared in other languages (vector in C++ and ArrayList in Java). In simple language, a Python list is a collection of things, enclosed in [ ] and separated by commas. 


# 1. Creating list in python........
# l = [1, 2, 4, "a", "Kothari"]
# print(l)


# 2. List with size 0......
# li = [] 
# print("Length of the string is: ", len(li))
# for i in range (5):
#     n = int(input("Enter number: "))
#     li.append(n)
# print("Length of the string is: ", len(li))
# print(li)


# 3. List comprehension
i = 0
l1 = [i for i in range(50, 56) if i % 5 == 0] 
print(l1) # Output: [50, 55]


# List slicing......
print(l[:])
print(l[1: ])
print(l[1:len(l): 2])# 2 is jump index

print(type(l))
if "a" in l:
    print("yes!!")
else:
    print("No")
if "ash" in "ashish":
    print("Yes ash is there!!!")