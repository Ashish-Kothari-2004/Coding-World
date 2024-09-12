# Unary Operators: 
# Many unary operations are provided as a method of ndarray class. This includes sum, min, max, etc. These functions can also be applied row-wise or column-wise by setting an axis parameter.


import numpy as np
arr1 = np.array ([[1, 2, 34, 22], [22, 33, 55, 7]])
print(arr1.max())
print(arr1.max(axis = 0)) # axis = 0 means column, Output: [22 33 55 22]

print(arr1.min())
print(arr1.min(axis = 1)) # axis = 1 means row, Output: [1 7]

print(arr1.sum())
print(arr1.sum(axis = 1)) # axis = 1 means row, Output: [59 117]
