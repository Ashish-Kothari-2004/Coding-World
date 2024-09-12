# Dictionary Methods: 
# 1. dict.get(key, default = “None”): Returns the value of specified key
# 2. dict.keys(): Returns a list containing dictionary’s keys
# 3. dict.values(): Returns a list of all the values of dictionary
# 4. dict.items(): Returns a list containing a tuple for each key value pair
# 5. dict.copy(): Returns a copy of the dictionary
# 6. dict.update(dict2): Updates dictionary with specified key-value pairs
# 7. pop(): Remove the element with specified key
# 8. popItem(): Removes the last inserted key-value pair
# 9. dict.clear(): Remove all the elements from the dictionary
# 10. dict.setdefault(key,default = “None”): Set the key to the default value if the key is not specified in the dictionary
# 11. dict.has_key(key): Returns true if the dictionary contains the specified key.

dict = {
    1: "ashish", 
    2: "rahul", 
    3: "rohit",
    4: "suraj"
}
d = {
    0: "Hi"
}

print(dict.get(1))
print(dict.keys())
print(dict.values())
print(dict.items())

dict1 = dict.copy()
print(dict1)

d.update(dict)
print(d)
d.update({5: "karan"})
print(d)

d.pop(0)
print(d)

d.popitem()
print(d)

d.clear()
print(d)

# del(d) # Delete d 
# print(d) # d is not defined