# zip() in Python: Python zip() method takes iterable containers and returns a single iterator object, having mapped values from all the containers. 
# Python zip() Syntax: 
# It is used to map the similar index of multiple containers so that they can be used just using a single entity. 
# Syntax :  zip(*iterators) 
# Parameters : Python iterables or containers ( list, string etc ) 
# Return Value : Returns a single iterator object.


name = [ "Manjeet", "Nikhil", "Shambhavi", "Astha", "ashish" ]
roll_no = [ 4, 1, 3, 2]
 
# using zip() to map values
mapped = zip(name, roll_no)
 
# print(tuple(mapped))
mapped = zip(d1, d2)
 
print(tuple(mapped))