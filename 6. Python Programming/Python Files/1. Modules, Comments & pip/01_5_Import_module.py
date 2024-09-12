# Import Modules in Python: 
# Python modules can get access to code from another module by importing the file/function using import. The import statement is the most common way of invoking the import machinery, but it is not the only way. When we import a module with the help of the Python import module it searches for the module initially in the local scope by calling __import__() function. The value returned by the function is then reflected in the output of the initial code. 

# 1.
# import numpy
# arr = numpy.array([2, 3, 4, 5, 6, 3])
# print(arr)

# 2. 
# import numpy as np
# arr = np.array([2, 3, 4, 5, 6, 3])
# print(arr)

# 3. 
# from math import sqrt
# a = sqrt(36)
# print("sqrt of 36 is: ", a)


# 4. 
# from math import sqrt as s
# a = s(36)
# print("sqrt of 36 is: ", a)


# 5. 
from math import *
a = sqrt(36)
print(a)
b = factorial(4)
print("Factorial of 4 is : ", b)
c = floor(32.336436)
print("The integer value of 32.336436", c)
p = pi
print("Value of Pi: ", p)
print(type(pi))