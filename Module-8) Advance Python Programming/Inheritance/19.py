
# Multiple Inheritance
# In multiple inheritance, a child class inherits from more than one parent class.

class Father:
    def father_method(self):
        print("Father Class")

class Mother:
    def mother_method(self):
        print("Mother Class")

class Child(Father, Mother):
    pass

obj = Child()

obj.father_method()
obj.mother_method()
