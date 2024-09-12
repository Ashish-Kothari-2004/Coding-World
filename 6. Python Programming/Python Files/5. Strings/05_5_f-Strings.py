# String formating............

# letter = "Hey my name is {} and i am from {}"
# name = "Ashish"
# country = "India"
# print(letter.format(name, country))

# letter = "Hey my name is {1} and i am from {0}"
# name = "Ashish"
# country = "India"
# print(letter.format(country, name))

# f-strings(Formatted string literals): Python offers a powerful feature called f-strings (formatted string literals) to simplify string formatting and interpolation. f-strings is introduced in Python 3.6 it provides a concise and intuitive way to embed expressions and variables directly into strings. The idea behind f-strings is to make string interpolation simpler. 

name = "Ashish"
country = "India"
age = 29
print(f"Hey my name is {name} and i am from {country}, i am {age+6} year old")
print(type(f"Hey my name is {name} and i am from {country}, i am {age+6} year old"))
