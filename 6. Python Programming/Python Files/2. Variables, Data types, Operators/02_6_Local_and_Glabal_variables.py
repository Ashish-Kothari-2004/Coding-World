x = 10

def func1():
    global x
    x = x + 4
    print("The value of x is : ", x)

func1()
print("The value of x outside func1 is : ", x)
