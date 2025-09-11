#Write a Python program to create a calculator using functions.

# Calculator functions
def add(a, b):
    return a + b

def subtract(a, b):
    return a - b

def multiply(a, b):
    return a * b

def divide(a, b):
    if b != 0:
        return a / b
    else:
        return "Cannot divide by zero"

# Example usage
num1 = 15
num2 = 3

print("Add:", add(num1, num2))
print("Subtract:", subtract(num1, num2))
print("Multiply:", multiply(num1, num2))
print("Divide:", divide(num1, num2))
