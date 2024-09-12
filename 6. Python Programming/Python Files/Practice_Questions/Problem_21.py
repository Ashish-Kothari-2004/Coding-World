# Q. WAP to replace the even index element with your name in tuple.
tup = (1, "a", "i", "k", 2)
l = list(tup)

for i in range(len(l)):
    if i % 2 == 0:
        l[i] = "ashish"

tup = tuple(l)
print(tup)
