# Tuples in Python: Python Tuple is a collection of objects separated by commas. In some ways, a tuple is similar to a Python list in terms of indexing, nested objects, and repetition but the main difference between both is Python tuple is immutable, unlike the Python list which is mutable.


# Creating Python Tuples: There are various ways by which you can create a tuple in Python. They are as follows:
# 1. Using round brackets
# 2. With one item
# 3. Tuple Constructor


# Tuple with element.........
# t1 = (23, 34, 9)
# print(t1)
# print(type(t1)) # Tuple
# print(t1[0])
# print(t1[1])
# print(t1[2])
# t1[0] = 23 # Throw error since tuples are immutable
# l = list(t1) # typecasting from tuple to list 
# print(l)
# print(type(l))# List 
# print()


# Empty tuple............
# t2 = ()
# print(t2)
# print(type(t2)) # Tuple
# print()


# Tuple with a single element.............
# t3 = (23) # Not a tuple, python will treat it as a integer value
# print(t3)
# print(type(t3))# 'int'
# t4 = (23,) # Treated as a tuple
# print(t4)
# print(type(t4)) # 'tuple'
# print()


# Negative indexing in tuple.......
# t5 = (23, 35 ,54, 67, 57, 7, 5)
# print(t5[-1]) # 5
# print(t5[len(t5)-1]) # 5
# print(t5[-2]) # 7 
# print(t5[len(t5)-2]) # 7



# Tuple slicing.............
t6 = (34, 354, 6, 57, 55, 68, 6, 8, 600)
print(t6[:])
print(t6[:len(t6)])
print(t6[:4]) # 4 is excluded --> 34, 354, 6, 57

if 34 in t6:
    print("Element is present in the tuple !!")
else: 
    print("Element is not present in the tuple!!")

for i in t6: # Here i is element 
    print(i)
print()

for i in range(len(t6)): # Here i is index
    print(t6[i])
print()


# Slicing and copying one tuple to another
t7 = t6[:5]
print(t7)

# It will be treated as tuple
a = 1, 2, 3, 5, 4
print(type(a)) # Output: <class 'tuple'>

