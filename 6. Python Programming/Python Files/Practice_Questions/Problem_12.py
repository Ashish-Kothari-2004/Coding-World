# Q. WAP to count the no. of vowels appearing in list.

l1 = [1, 'a', 'i', 45, 'e', 0, 5]
count = 0
for i in l1:
    if type(i) == str:
        for j in i:
            if j == 'a' or j == 'e' or j == 'i' or j == 'o' or j == 'u': 
                count = count + 1
print("The total number of vowels in the list is: ", count)