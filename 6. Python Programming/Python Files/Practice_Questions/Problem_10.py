# Q. WAP to remove duplicate element from a list.
l1 = [23, 2, 1, 6, 23, 1]
l2 = []
for i in l1:
    if i not in l2:
        l2.append(i)
l1 = l2
print(l1)
