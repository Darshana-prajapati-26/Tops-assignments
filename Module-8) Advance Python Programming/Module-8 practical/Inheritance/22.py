# Hybrid Inheritance

# In hybrid inheritance, a child class inherits from multiple parent classes, which can be a combination of single, multiple, and multilevel inheritance.

class Grandfather:
    def grandfather_method(self):
        print("Grandfather Class")

class Father(Grandfather):
    def father_method(self):
        print("Father Class")

class Mother:
    def mother_method(self):
        print("Mother Class")

class Child(Father, Mother):
    def child_method(self):
        print("Child Class")

# Creating an object of the Child class
c1 = Child()
c1.child_method()
c1.father_method()
c1.grandfather_method()
c1.mother_method()
