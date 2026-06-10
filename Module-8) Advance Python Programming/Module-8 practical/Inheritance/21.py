# Hierarchical Inheritance
# In hierarchical inheritance, multiple child classes inherit from a single parent class.

class Parent:
    def parent_method(self):
        print("Parent Class")

class Child1(Parent):
    def child1_method(self):
        print("Child1 Class")

class Child2(Parent):
    def child2_method(self):
        print("Child2 Class")

c1 = Child1()
c1.parent_method()
c1.child1_method()
# c1.child2_method()  # This will raise an error since child1 does not have child2_method

c2 = Child2()
c2.parent_method()
c2.child2_method()
# c2.child1_method()  # This will raise an error since child2 does not have child1_method

