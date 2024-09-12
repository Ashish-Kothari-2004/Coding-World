#  flatten() method: We can use flatten method to get a copy of the array collapsed into one dimension. It accepts order argument

import numpy as np

# Flatten array 
arr = np.array([[1, 2, 3], [4, 5, 6]]) 
flat_arr = arr.flatten() 
print ("Original array:\n", arr) 
print ("Fattened array:\n", flat_arr)
