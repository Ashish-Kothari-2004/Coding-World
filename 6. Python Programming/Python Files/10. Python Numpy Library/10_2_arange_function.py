# arange(): The arange([start,] stop[, step,][, dtype]) : Returns an array with evenly spaced elements as per the interval. The interval mentioned is half-opened i.e. [Start, Stop) 

import numpy as np
arr1 = np.arange(7)
print ("A sequential array from 0 to 6 with steps of 0:\n", arr1)

arr2 = np.arange(1, 10)
print ("A sequential array from 1 to 9 with steps of 0:\n", arr2)

arr3 = np.arange(0, 30, 5) 
print ("A sequential array with steps of 5:\n", arr3) # Output: [0 5 10 15 20 25]
print (type(arr3)) # Output: <class 'numpy.ndarray'>