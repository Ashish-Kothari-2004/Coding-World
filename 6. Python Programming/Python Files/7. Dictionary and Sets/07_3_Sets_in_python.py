# Sets in python: A Set in Python programming is an unordered collection data type that is iterable, mutable and has no duplicate elements. 
# Python set is an unordered datatype, which means we cannot know in which order the elements of the set are stored.
# Python sets cannot have a duplicate value and once it is created we cannot change its value.

myset = {"ashish", 123, 92.32, "kothari"}
# myset[0] = "ash" # Since Sets are unordered, we cannot change its value using index
myset.add("Hi")
print(myset)

# Python Frozen Sets: Frozen sets in Python are immutable objects that only support methods and operators that produce a result without affecting the frozen set or sets to which they are applied. It can be done with frozenset() method in Python.While elements of a set can be modified at any time, elements of the frozen set remain the same after creation.\

normal_set = set(["a", "b", "c", "d"]) # Same as normal_set = {"a", "b", "c", "d"}
normal_set.add("e")
print(normal_set)
forzen_set = frozenset(["w", "x", "y", "z"])
# forzen_set.add("p") # Frozen sets in Python are immutable objects
print(forzen_set)

# Empty Set: 
myset1 = {}
print(type(myset1)) # Output: <class 'dict'>
myset2 = set()
print(type(myset2)) # Output: <class 'set'>
