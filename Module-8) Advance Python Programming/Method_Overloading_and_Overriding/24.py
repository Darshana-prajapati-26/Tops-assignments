# Write a Python program to show method overloading.
# Method overloading is a feature in object-oriented programming where multiple methods can have the same name but different parameters. However, Python does not support method overloading in the traditional sense as seen in other programming languages like Java or C++. In Python, if you define multiple methods with the same name, the last defined method will overwrite the previous ones.


# example 1
# class Calculator:
#     def add(self, a, b):
#         return a + b

#     def add(self, a, b, c):
#         return a + b + c
    
# calc = Calculator()

# # This will call the last defined add method, which takes three parameters
# sum1 = calc.add(1, 2, 3)
# print("Result of addition:", sum1)

# sum2 = calc.add(1, 2)  # This will raise an error since the add method with two parameters is overwritten
# print("Result of addition:", sum2)

# exampl 2
class Display:

    def show(self, name=None):
        if name is None:
            print("Hello!")
        else:
            print("Hello", name)

obj = Display()

obj.show()
obj.show("Darshana")


# exmaple 3

class Addition:

    def add(self, a, b=0, c=0):
        print("Sum =", a + b + c)

obj = Addition()

obj.add(10)          # One argument
obj.add(10, 20)      # Two arguments
obj.add(10, 20, 30)  # Three arguments


