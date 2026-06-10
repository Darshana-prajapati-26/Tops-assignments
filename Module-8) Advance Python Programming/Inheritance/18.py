# Write Python programs to demonstrate different types of inheritance (single, multiple, multilevel, etc.).

# Single Inheritance
# In single inheritance, a child class inherits from a single parent class.

class parent:

    def display(self):
        print("This is parent class")

class child(parent):
    def show(self):
        print("This is child class")

c1 = child()
c1.display()
c1.show()
