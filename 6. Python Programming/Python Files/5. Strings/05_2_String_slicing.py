# Python slicing: Python slicing is about obtaining a sub-string from the given string by slicing it respectively from start to end.

# Python slicing can be done in two ways:
# A. Using a slice() method
# Syntax:
#   slice(stop)
#   slice(start, stop, step)

# B. Using the array slicing  [::] method
# Syntax:
#   arr[start:stop:step]


# 1. String slicing --------------
# name = "Ashish"
# print(name[0 : 3]) # Output: Ash
# print(name[1 : 4]) # Output: shi
# print(name[:3])# --> is same as name[0 : 3]
# print(name[0:])# --> is same as name[0 : 6]
# print(name[1:])# --> is same as name[1 : 6]


# 2. Slicing with skiping values ------
# name = "Ashish"
# print(name[0 : 5 : 2]) # Output: Ahs
# print(name[0 : : 3]) # is same as name[0 : 6 : 3] -> # Output: Ai


# 3. Negative Indices --------
name = "Ashish"
print(name[::-1]) # Output: hsihsA
print(name[-4 : -1]) # Output: his
print(name[-6 : -2]) # Ashi


# B. Using islice()
slice_obj = slice(0, 3)
print(name[slice_obj])
