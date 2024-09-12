# enumerate() method:  Often, when dealing with iterators, we also need to keep a count of iterations. Python eases the programmers’ task by providing a built-in function enumerate() for this task. The enumerate () method adds a counter to an iterable and returns it in the form of an enumerating object. This enumerated object can then be used directly for loops or converted into a list of tuples using the list() function.
# Syntax: enumerate(iterable, start=0)
# Parameters:
# Iterable: any object that supports iteration
# Start: the index value from which the counter is to be started, by default it is 0
# Return: Returns an iterator with index and element pairs from the original iterable

all_marks = [8 , 2, 3, 6, 8, 8, 9]
for index, marks in enumerate(all_marks):
    print(marks);
    print(index)
    print()

print("........................................................")
for index, marks in enumerate(all_marks, start=3): # start: he index value from which the counter is to be started, by default it is 0
    print(marks)
    print(index)