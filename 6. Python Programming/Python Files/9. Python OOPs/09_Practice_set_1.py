# Q. Write a python program having a class. It has a function which will take name of the user as input. This function will also check if the first letter of the name is capital or not. If yes then make another function which will print the vowels in the name and if not then ask the user to enter the name again.
class C1:
    def fun1(self):
        name = input("Enter your name: ")
        if name[0].isupper() == True: 
            print("Starts with a uppercase letter!!")
            self.fun2(name)
        else:
            name = input("Enter you name again: ")
    def fun2(self, name):
                l = ["a", "e", "i", "o", "u", "A", "E", "I", "O", "U"]
                for i in name:
                    if i in l:
                        print(i)
obj = C1()
obj.fun1()

  