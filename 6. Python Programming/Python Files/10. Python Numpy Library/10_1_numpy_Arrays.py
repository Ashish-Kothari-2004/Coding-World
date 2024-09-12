# What is NumPy? 
# NumPy is a general-purpose array-processing package. It provides a high-performance multidimensional array object and tools for working with these arrays. It is the fundamental package for scientific computing with Python. It is open-source software.

# Features of NumPy
# NumPy has various features including these important ones:
# 1. A powerful N-dimensional array object
# 2. Sophisticated (broadcasting) functions
# 3. Tools for integrating C/C++ and Fortran code
# 4. Useful linear algebra, Fourier transform, and random number capabilities

# NumPy Array: NumPy array is a multi-dimensional data structure that is the core of scientific computing in Python.
# All values in an array are homogenous (of the same data type).

import numpy as np
li1 = [89, 23, 56, 86]
li2 = [3, 6, 77, 44]
t1 = (1, 66, 78, 33, 88)
t2 = (1, 2, 4, 56, 7)

# Creating array object
arr = np.array([11, 22, 33, 44]) # 1D array
arr1 = np.array([[1, 2, 3, 4, 5], [23, 22, 34, 68, 9]]) # 2D array
arr2 = np.array([li1, li2]) # 2D array
arr3 = np.array((t1, t2)) # 2D array

# Printing the array
print(arr)
print(arr1)
print(arr2)
print(arr3)
print()

# Printing type of arr object 
print(type(arr)) # <class 'numpy.ndarray'>
print(type(arr1))
print(type(arr2))
print(type(arr3))
print()

# Printing array dimensions (axes) 
print("No of dimensions of array 1 : ", arr.ndim) # 1 
print("No of dimensions of array 1 : ", arr1.ndim) # 2 
print("No of dimensions of array 2 : ", arr2.ndim) # 2 
print("No of dimensions of array 3 : ", arr3.ndim) # 2 
print()

# Printing shape of array
print("Shape of array : ", arr.shape)
print("Shape of array : ", arr1.shape)
print("Shape of array : ", arr2.shape)
print("Shape of array : ", arr3.shape)
print()

# Printing size (total number of elements) of array 
print("Size of array : ", arr.size)
print("Size of array : ", arr1.size)
print("Size of array : ", arr2.size)
print("Size of array : ", arr3.size)
print()

# Printing type of elements in array 
print("Array stores elements of type: ", arr.dtype) # int32
print("Array stores elements of type: ", arr1.dtype) # int32
print("Array stores elements of type: ", arr2.dtype) # int32
print("Array stores elements of type: ", arr3.dtype) # int32
print()

a = np.array([1, 1, 1, 1], dtype = 'float')
print(a, a. dtype) # [1. 1. 1. 1.] float 64
b = np.array([1, 22, 24, 25], dtype = 'complex') # [ 1.+0.j 22.+0.j 24.+0.j 25.+0.j] complex128
print(b, b.dtype)

# Create an array with random values 
e = np.random.random([2, 2]) # First 2 for no. of rows and second 2 for no. of columns
print(e)

# Transpose of array: 
print(arr1.T)