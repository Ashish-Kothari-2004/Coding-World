# Strings - String is a data type in python.Strings is a sequence of characters enclosed in quotes.
# 1.Single quoted string 
# 2.Double quoted string
# 3.Triple quoted string

a = "Kothari's" # Use this if we have single quote in our string.
b = 'Kothari"s' # Use this if we have double quote in our string.
c = '''Kothari"s and Kothari's''' # Use this if we have double and single quotes in our string.
d = '''Hello 
friends '''
# We can use triple quote if we want to add new line.
print(a)
print(b)
print(c)
print(d)

a = "Good Morning,"
b = "Ashish"
print(a + b)
print(b[0])
print(b[1])
print(b[2])
print(b[3])
print(b[4])
print(b[5])
# b[4] = "t" # -> Does not work because strings are immutable in python