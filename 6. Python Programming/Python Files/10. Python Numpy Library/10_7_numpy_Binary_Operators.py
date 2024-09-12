# NumPy – Binary Operators
# These operations apply to the array elementwise and a new array is created. You can use all basic arithmetic operators like +, -, /,  etc. In the case of +=, -=, = operators, the existing array is modified.

import numpy as np
a = np.array([[1, 2], [3, 4]]) 
b = np.array([[4, 3], [2, 1]]) 

# Add arrays 
print("Array Sum : \n", a + b)

# Multiply arrays (elementwise multiplication)
print("Array multiplication: \n", a * b)

# Matrix multiplication or dot operation
print("Matrix multiplication : \n", a.dot(b))

