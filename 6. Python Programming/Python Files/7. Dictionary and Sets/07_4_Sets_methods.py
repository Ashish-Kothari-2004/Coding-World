# Methods of set: 
# 1. add(): Insertion in the set is done through the set.add() function.
# 2. union(): Two sets can be merged using union() function or | operator.
# 3. intersection(): This can be done through intersection() or & operator.
# 4. intersection_update(): Updates the existing caller set with the intersection of sets
# 5. clear(): set clear() method empties the whole set inplace.
# 6. update(): Adds elements to the set
# 7. difference_update(): Updates the existing caller set with the difference between two sets
# 8. frozenset(): Return an immutable frozenset object
# 9. remove():	Removes the element from the set, and throws error if element is not present in the set
# 10. discard(): Removes the element from the set
# 11. pop(): Returns and removes a random element from the set
# 12. copy(): Returns a shallow copy of the set
# 13. isdisjoint():	Checks whether the sets are disjoint or not
# 14. issubset(): Returns True if all elements of a set A are present in another set B
# 15. issuperset(): Returns True if all elements of a set A occupies set B
# 16. difference(): To find differences between sets, this is done through difference() or – operator.
# 17. symmetric_difference(): Returns a set which is the symmetric difference between the two sets
# 18. symmetric_difference_update(): Updates the existing caller set with the symmetric difference of sets

myset1 = {"ashish", "kothari", 1, 2, 3}
myset2 = {1, 2, 3}

# add():
# myset1.add("Hi")
# print(myset1)

# union():
# print(myset1.union(myset2))

# intersection(): 
# print(myset1.intersection(myset2))

# intersection_update(): 
# print(myset1.intersection_update(myset2))
# print(myset1) 

# update(): 
# myset1.update({12, 23, 45, 3})
# print(myset1)

# difference(): 
# print(myset1.difference(myset2))

# isdisjoint(): 
# print(myset1.isdisjoint(myset2))

# issubset():
# print(myset1.issubset(myset2))

# issuperset():
# print(myset2.issubset(myset1))

# copy(): 
# myset3 = myset1.copy()
# print(myset3)

# symmetric_difference():
# print(myset1.symmetric_difference(myset2))

# remove():
# print(myset1)
# myset1.remove("ashish")
# myset1.remove(89) # 89 is not present in the set, it will throw error
# print(myset1)

# discard():
# print(myset1)
# myset1.discard(89) # 89 in not present in the set, but will not throw error
# print(myset1)

# pop(): 
# a = myset1.pop()
# print("Popped element is: ", a)

# clear(): 
# myset1.clear()
# print(myset1)

# del keyword: 
del myset1
print(myset1)# Throw NameError since myset1 has been deleted
