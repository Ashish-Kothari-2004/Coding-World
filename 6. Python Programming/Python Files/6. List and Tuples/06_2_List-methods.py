# List/Array Methods in Python:
# 01. append(): Used for adding elements to the end of the List. 
# 02. copy(): It returns a shallow copy of a list
# 03. clear(): This method is used for removing all items from the list. 
# 04. count(): These methods count the elements.
# 05. extend(): Adds each element of an iterable to the end of the List
# 06. index(): Returns the lowest index where the element appears. 
# 07. insert(): Inserts a given element at a given index in a list. 
# 08. pop(): Removes and returns the last value from the List or the given index value.
# 09. remove(): Removes a given object from the List. 
# 10. reverse()	Reverses objects of the List in place.
# 11. sort()	Sort a List in ascending, descending, or user-defined order
# 12. min()	Calculates the minimum of all the elements of the List
# 13. max()	Calculates the maximum of all the elements of the List

# 1. append()
l1 = [12, 32, 4, 5, 2, 4]
l1.append(7)
print(l1)

# 2. copy()
l2 = l1.copy()
print(l2)

# 3. clear()
l2.clear()
print(l2)

# 4. count()
c = l1.count(4)
print(c)

# 5. extend()
l2 = [1, 2, 3]
l1.extend(l2)
print(l1)

# 6. index()
print(l1.index(32))

# 7. insert()
l1.insert(2, 0)
print(l1)

# 8. pop()
a = l1.pop() # Removes and return last element
print(l1)
print(a)

# 9. remove()
l1.remove(12)
print(l1)

# 10. reverse()
l1.reverse()
print(l1)

# 11. sort()
l1.sort()# ascending order 
print(l1)
l1.sort(reverse=True)# descending order 
print(l1)

# 12. min()
print(min(l1))

# 13. max()
print(max(l1))