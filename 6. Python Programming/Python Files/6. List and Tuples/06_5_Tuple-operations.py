# Different Operations Related to Tuples: Below are the different operations related to tuples in Python:
# 1. Concatenation
# 2. Nesting
# 3. Repetition
# 4. Slicing
# 5. Deleting
# 6. Conversion of lists to tuples
# 7. Tuples in a Loop

# 1. Concatenation
tup1 = (1, 23, 45, 1, 65, 76, 5, 2, 2, 2)
tup2 = ("Ashish", 4, "Kothari", 0)
print(tup1 + tup2)

# 2. Nesting
# tup3 = (23, 4, 6, 76, (23, 23, 4), 111)
tup3 = (tup1, tup2)
print(tup3)

# 3. Repetition
tup4 = ("Python", )*4
print(tup4)

# 4. Slicing
tup5 = tup1[3: 5]
print(tup5)

# 5. Deleting
tup6 = (1, 2, 3, 4, 5)
del tup6 # The del keyword is used to delete the objects in Python.
# print(tup6) # tup6 has been deleted 

# 6. Conversion of lists to tuples
li = ['a', 2, 89]
tup6 = tuple(li)
print(type(tup6))

# 7. Tuples in a Loop
for i in range(len(tup6)):
    print(tup6[i])