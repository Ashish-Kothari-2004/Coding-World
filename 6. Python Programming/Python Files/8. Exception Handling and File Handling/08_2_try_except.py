# Try and Except Statement: try and except statements are used to catch and handle exceptions in Python. Statements that can raise exceptions are kept inside the try clause and the statements that handle the exception are written inside except clause.

l = [1, 2, 3]
for i in range(3):
    print(l[i])
# print(l[i+1]) # IndexError: list index out of range


try: 
    print(l[i+1])
except: 
    print("An error occurred")


try: 
    print(l[i+1])
except Exception as e: 
    print(e)
# Note: Exception is the base class for all the exceptions in Python. 


# Catching Specific Exception
try: 
    print(l[i+1])
except IndexError as e: 
    print(e)



# The keyword ‘as’ is used to create an alias in python.
# Advantages with ‘as’ keyword:
# It is useful where we cannot use the assignment operator such as in the import module.
# It makes code more understandable to humans.
# The keyword as is used to make alias with programmer selected name, It decreases the chance coincide of the name of the module with the variable name.
