# Try with Else Clause:
# In Python, you can also use the else clause on the try-except block which must be present after all the except clauses. The code enters the else block only if the try clause does not raise an exception.

a = 23
b = int(input("Enter any no: "))
try:
    result = a /b
except Exception as e:
    print(e)
else: 
    print(result)
