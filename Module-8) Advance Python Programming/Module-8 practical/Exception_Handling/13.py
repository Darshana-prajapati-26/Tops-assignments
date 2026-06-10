# Write a Python program to handle exceptions in a calculator.

try:
        num1 = float(input("Enter first number: "))
        operation = input("Enter operation (+, -, *, /): ")
        num2 = float(input("Enter second number: "))
        

        if operation == '+':
            result = num1 + num2
        elif operation == '-':
            result = num1 - num2
        elif operation == '*':
            result = num1 * num2
        elif operation == '/':
            result = num1 / num2
        else:
            raise ValueError("Invalid operation")

        print(f"Result: {result}")

except ValueError :
        print("Error: Invalid input. Please enter a valid number or operation.")
except ZeroDivisionError:
        print("Error: Cannot divide by zero.")
except Exception :
        print("An unexpected error occurred.")

finally:
        pass

