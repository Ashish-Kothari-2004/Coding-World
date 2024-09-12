# For Loop in Python: Python For loop is used for sequential traversal i.e. it is used for iterating over an iterable like String, Tuple, List, Set, or Dictionary.

# For string
name = "ashish"
for i in name:
    print(i, end=",")
print()

# For list 
colors = ["Red", "Green", "Blue", "Yello", "Orange"]
for i in colors:
    print(i)
    

# Nesten For loop
Brands = ["BMW", "Mercedes", "Toyota", "Mahindra"]
for car in Brands:
    for i in car:
        print(i, end=",")
    print()


# range() function 
for i in range (10):# 0 to 9
    print(i)
print()
for j in range (10, 50):# 10 to 49
    print(j)
print()
for k in range (1, 21):# 1 to 20
    print(k)
