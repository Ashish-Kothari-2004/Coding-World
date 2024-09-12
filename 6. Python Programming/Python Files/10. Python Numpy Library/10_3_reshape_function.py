# reshape(): The numpy.reshape() function shapes an array without changing the data of the array.
# Syntax:
# numpy.reshape(array, shape, order = 'C')

import numpy as np
# 1D array with 8 elements 
arr1 = np.array([1, 2, 3, 4, 5, 6, 7, 8]) 
# Reshaping from 1D array to 2D array 
print(arr1.reshape(4, 2)) # 2D array with 4 rows and 2 columns
print()
# Reshaping from 1D array to 3D array 
print(arr1.reshape(2, 2, 2)) # Output: [[[1 2] [3 4]]   [[5 6][7 8]]]
print()
print()
print()
print()

# 2D array with 8 elements 
arr2 = np.array([[2, 4, 6, 8], [10, 12, 14, 16]])
# Reshaping from 2D array to 1D array
print(arr2.reshape(1, 8))
print()
# Reshaping from 2D array to 3D array
print(arr2.reshape(2, 2, 2))


# Returns Copy or View?
print(arr1.reshape(2, 4).base) # returns the original array, so it is a view. That means the original array would not change
