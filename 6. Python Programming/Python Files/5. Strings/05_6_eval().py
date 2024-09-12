# Python eval(): The eval () function is one of the Python built-in functions. The word ‘eval’ can be thought of as a short form for ‘evaluation’, which is the process of finding the output.
#  Python eval() function parse the expression argument and evaluate it as a Python expression and runs Python expression (code) within the program.
# Syntax: eval(expression, globals=None, locals=None)

# Parameters:
# 1. expression: String is parsed and evaluated as a Python expression
# 2. globals[optional]: Dictionary to specify the available global methods and variables.
# 3. locals[optional]: Another dictionary to specify the available local methods and variables.
# 4. Return: Returns output of the expression.

# Uses of Python eval() Function in Python: 
# Python eval() is not much used due to security reasons, as we explored above. Still, it comes in handy in some situations like:
# You may want to use it to allow users to enter their own “scriptlets”: small expressions (or even small functions), that can be used to customize the behavior of a complex system.
# eval() is also sometimes used in applications needing to evaluate math expressions. This is much easier than writing an expression parser.

result = eval("2 + 3")
print(result)  # Output: 5

x = 23
print("x > 50 ? : ", eval("x > 50")) # Output: False

str1 = "Ashish"
print(eval("str1 + 'Kothari'"))# Output: AshishKothari

li = [1, 2, 3, 4, 5]
print(eval("li + [6, 7, 8, 9, 10]"))