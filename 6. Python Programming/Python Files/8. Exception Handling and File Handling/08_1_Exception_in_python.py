# Error in Python can be of two types.
# 1. Syntax errors: Errors are problems in a program due to which the program will stop the execution.
# 2. Exceptions: Exceptions are raised when some internal events occur which change the normal flow of the program.

# Different types of exceptions in python:
# In Python, there are several built-in Python exceptions that can be raised when an error occurs during the execution of a program. Here are some of the most common types of exceptions in Python:

# 1. SyntaxError:
# This exception is raised when the interpreter encounters a syntax error in the code, such as a misspelled keyword, a missing colon, or an unbalanced parenthesis.

# 2. TypeError:
# This exception is raised when an operation or function is applied to an object of the wrong type, such as adding a string to an integer.

# 3. NameError:
# This exception is raised when a variable or function name is not found in the current scope.

# 4. IndexError: 
# This exception is raised when an index is out of range for a list, tuple, or other sequence types.

# 5. KeyError: 
# This exception is raised when a key is not found in a dictionary.

# 6. ValueError: 
# This exception is raised when a function or method is called with an invalid argument or input, such as trying to convert a string to an integer when the string does not represent a valid integer.

# 7. AttributeError: 
# This exception is raised when an attribute or method is not found on an object, such as trying to access a non-existent attribute of a class instance.

# 8. IOError: 
# This exception is raised when an I/O operation, such as reading or writing a file, fails due to an input/output error.

# 9. ZeroDivisionError: 
# This exception is raised when an attempt is made to divide a number by zero.

# 10. ImportError: 
# This exception is raised when an import statement fails to find or load a module.

# Advantages of Exception Handling:
# 1. Improved program reliability
# 2. Simplified error handling   
# 3. Cleaner code
# 4. Easier debugging

# 1. Disadvantages of Exception Handling:
# 2. Performance overhead
# 3. Increased code complexity
# 4. Possible security risks

# Note: Exception is the base class for all the exceptions in Python.

marks = 10000
a = marks / 0
print(a) # Output: ZeroDivisionError: division by zero