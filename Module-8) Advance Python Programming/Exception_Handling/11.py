# Write a Python program to handle exceptions in a simple calculator (division by zero, invalid input).
try:
    num1 = float(input("Enter first number: "))
    operator = input("Enter operator (+, -, *, /): ")
    num2 = float(input("Enter second number: "))

    if operator == "+":
        result = num1 + num2
        print("Result =", result)

    elif operator == "-":
        result = num1 - num2
        print("Result =", result)

    elif operator == "*":
        result = num1 * num2
        print("Result =", result)

    elif operator == "/":
        result = num1 / num2
        print("Result =", result)

    else:
        print("Error: Invalid operator.")

except ZeroDivisionError:
    print("Error: Cannot divide by zero.")

except ValueError:
    print("Error: Please enter valid numbers.")