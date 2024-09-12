# Q. WAP to find the occurrence of integer type in a tuple.
tup = (1, 2, 'a', 23, "ashish")
count = 0
for i in tup:
    if type(i) == int:
        count = count + 1

print("The occurrence of integer type in a tuple is: ", count)