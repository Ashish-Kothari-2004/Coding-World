# Pandas Libray in Python: Pandas is a powerful and versatile library that simplifies the tasks of data manipulation in Python.Pandas is well-suited for working with tabular data, such as spreadsheets or SQL tables. The Pandas library is an essential tool for data analysts, scientists, and engineers working with structured data in Python.

# What is Python Pandas used for?
# The Pandas library is generally used for data science, but have you wondered why? This is because the Pandas library is used in conjunction with other libraries that are used for data science. It is built on top of the NumPy library which means that a lot of the structures of NumPy are used or replicated in Pandas. The data produced by Pandas is often used as input for plotting functions in Matplotlib, statistical analysis in SciPy, and machine learning algorithms in Scikit-learn.

# Here is a list of things that we can do using Pandas.
# Data set cleaning, merging, and joining.
# Easy handling of missing data (represented as NaN) in floating point as well as non-floating point data.
# Columns can be inserted and deleted from DataFrame and higher-dimensional objects.
# Powerful group by functionality for performing split-apply-combine operations on data sets.
# Data Visualization.

# Data Structures in Pandas Library
# 1. Series
# 2. DataFrame



# 1. Pandas Series
# A Pandas Series is a one-dimensional labeled array capable of holding data of any type (integer, string, float, Python objects, etc.). The axis labels are collectively called indexes. The Pandas Series is nothing but a column in an Excel sheet. Labels need not be unique but must be of a hashable type. The object supports both integer and label-based indexing and provides a host of methods for performing operations involving the index.

# Creating a Pandas Series: In the real world, a Pandas Series will be created by loading the datasets from existing storage, storage can be SQL Database, CSV file, and Excel file. Pandas Series can be created from the lists, dictionary, and from a scalar value etc. Series can be created in different ways, here are some ways by which we create a series
# 1. Creating a series from array: n order to create a series from NumPy array, we have to import numpy module and have to use array() function. 
# 2. Creating a series from Lists: In order to create a series from list, we have to first create a list after that we can create a series from list. 
# 3. Dictionaries: In order to create a series from the dictionary, we have to first create a dictionary after that we can make a series using dictionary. Dictionary keys are used to construct indexes of Series.  
# 4. Scalar values: In order to create a series from scalar value, an index must be provided. The scalar value will be repeated to match the length of the index. 

import pandas as pd
import numpy as np
# Creating Empty Series 
s1 = pd.Series()
print(s1)

# 1. Creating a series from array
arr1 = np.array([2, 4, 6, 8, 10])
s2 = pd.Series(arr1)
print(s2)

# Creating a series from array with an index
s3 = pd.Series(arr1, index = ['a', 'b', 'c', 'd', 'e'])
print(s3)


# 2. Creating a series from Lists
l1 = [1, 2, 3, 4]
s4 = pd.Series(l1)
print(s4)

# Creating a series from list with an index
s5 = pd.Series(l1, index = ['o', 't', 't', 'f'])
print(s5)


# 3. Dictionaries: 
dict = {'a': "Ashish",
        'r': "Rohan",
        's': "Suraj"
}
s6 = pd.Series(dict)
print(s6)


# 4. Scalar values: 
import pandas as pd
import numpy as np
ser = pd.Series(10, index=[0, 1, 2, 3, 4, 5])
print(ser)
