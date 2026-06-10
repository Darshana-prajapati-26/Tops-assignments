# Write a Python program to demonstrate handling multiple exceptions.

try:
    choice = int(input("Enter choice (1-5): "))

    if choice == 1:
        num = 10 / 0          # ZeroDivisionError

    elif choice == 2:
        num = int("abc")      # ValueError

    elif choice == 3:
        my_list = [1, 2, 3]
        print(my_list[5])     # IndexError

    elif choice == 4:
        my_dict = {"name": "Darshana"}
        print(my_dict["age"]) # KeyError

    elif choice == 5:
        file = open("q12.txt", "r")  # FileNotFoundError

except ZeroDivisionError:
    print("Error: Cannot divide by zero.")

except ValueError:
    print("Error: Invalid value entered.")

except IndexError:
    print("Error: List index out of range.")

except KeyError:
    print("Error: Key not found in dictionary.")

except FileNotFoundError:
    print("Error: File not found.")

finally:
    print("Program ended.")