# Write a Python program to show method overriding.

class Parent:
    def show(self):
        print("This is Parent Class")

class Child(Parent):
    def show(self):
        print("This is Child Class")

obj = Child()
obj.show()

obj1 = Parent()
obj1.show()