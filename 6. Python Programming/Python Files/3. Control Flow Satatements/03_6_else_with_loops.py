# The else block just after for/while is executed only when the loop is NOT terminated by a break statement.

for i in range(5): 
    print(i)
else: 
    print("sorry no i !")
# Output: both block will execute


for i in []: 
    print(i)
else: 
    print("sorry no i !")
# Output: else block will execute


for i in range(5): 
    print(i)
    if i == 2: 
        break
else: 
    print("sorry no i !")
# Output: Only for loop will execute


i = 0
while i < 5: 
    print(i)
    if i == 2: 
        break
    i= i + 1
else: 
    print("sorry no i !")
# Output: Only while loop will execute
