# Python String split(): Python String split() method splits a string into a list of strings after breaking the given string by the specified separator.
# Parameters: 
# separator: This is a delimiter. The string splits at this specified separator. If is not provided then any white space is a separator.
# maxsplit: It is a number, that tells us to split the string into a maximum of the provided number of times. If it is not provided then the default is -1 which means there is no limit.
# split() method returns a list of strings after breaking the given string by the specified separator.

str = "Hey,i,am,Ashish"
words = str.split(",")
print(words)
print(type(words)) # Output: <class list>

a = "Python learner"
print(a.split()) # Default separator is ' '

x = "AshishKothari"
print(x.split("s")) # Output: ['A', 'hi', 'hKothari']
print(x.split("k")) # Output: ['AshishKothari']
print(x.split("K")) # Output: ['Ashish', 'othari']