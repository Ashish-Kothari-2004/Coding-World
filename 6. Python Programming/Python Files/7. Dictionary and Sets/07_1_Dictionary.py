# Dictionary in python: Dictionaries in Python is a data structure, used to store values in key:value format. This makes it different from lists, tuples, and arrays as in a dictionary each key has an associated value.
# Note: As of Python version 3.7, dictionaries are ordered and can not contain duplicate keys.

dict = {
    "id": 1234,
    "name" : "ashish", 
    "marks" : 65.34,
    111: 222
}
print(dict)
print(dict["id"])
print(dict["name"])
print(dict[111])
# get() method provides a safe way to access dictionary values, avoiding KeyError if the key doesn’t exist.
print(dict.get("id")) # If key doesn't exsts it will not throw error
print(dict.get("name"))
print(dict.get("roll")) # Output: None

print(dict.keys()) # Returns the list of keys in dictionary
print(dict.values()) # Returns the list of all values in dictionary
print(dict.items()) # Returns the list of all key value pairs
for key in dict.keys(): 
    print(dict[key])


# Nested Dictionaries.......
d = {1: "car", 2 : "bus", 3: {"a": "bike", "b": "scooty"}}
print(d)
print(d[1])
print(d[3])
print(d[3]["a"]) # Output: bike
print(d[3]["b"]) # Output: scooty


# Adding value to a dictioanry 
dd = {}
dd[1] = "Hi"
dd[2] = "I"
dd[3] = "am"
dd[4] = "Ashish"
dd['aa'] = 1, 2, 3 # Tuple
print(dd)
print(type(dd['aa']))# <class 'tuple'>

# Note: Updating an existing value in a Dictionary can be done by using the built-in update() method.

# Deleting Elements using ‘del’ Keyword:  
del(dd[1])
print(dd)