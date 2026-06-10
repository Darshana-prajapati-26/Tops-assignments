# Write a Python program to print custom exceptions.

class AgeError(Exception):
    pass
try:
    age = int(input("Enter your age: "))

    if age < 18:
        raise AgeError("Age must be at least 18 to vote.")

    print("You are eligible.")

except AgeError as e:
    print("Error:", e)
    
except ValueError:
    print("Please enter a valid number.")