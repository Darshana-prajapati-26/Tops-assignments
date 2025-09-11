
# Write a Python program to create a list with elements of multiple data types (integers, strings, floats, etc.).

# Program to create a list with multiple data types

# Creating the list
mixed_list = [10, "Python", 3.14, True, 7+2j, None]

# Printing the list
print("List with multiple data types:", mixed_list)

# Printing each element with its data type
print("\nElements and their data types:")
for item in mixed_list:
    print(item, "=>", type(item))


