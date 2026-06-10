# Multilevel Inheritance
# In multilevel inheritance, a child class inherits from a parent class, which in turn inherits from another parent class.

class Grandfather:
    def grandfather_method(self):
        print("Grandfather Class")

class Father(Grandfather):
    def father_method(self):
        print("Father Class")

class Child(Father):
    def child_method(self):
        print("Child Class")

# Creating an object of the Child class
c1 = Child()
c1.child_method()
c1.father_method()
c1.grandfather_method()
    
f1 = Father()
f1.father_method()
f1.grandfather_method()

g1 = Grandfather()
g1.grandfather_method()
