#Write a Python program to access elements at different index positions.

# python 2_.py
# Python program to access elements at different index positions

# Taking list input from user
fruits = input("Enter list elements separated by spaces: ").split()

# Display the list
print("\nYour list:", fruits)

# Accessing elements using positive indexing
print("\nAccessing using positive index:")
print("First element:", fruits[0])
print("Second element:", fruits[1])
print("Last element:", fruits[len(fruits)-1])

# Accessing elements using negative indexing
print("\nAccessing using negative index:")
print("Last element (using -1):", fruits[-1])
print("Second last element (using -2):", fruits[-2])

# Accessing elements with a loop
print("\nAll elements with their indexes:")
for i in range(len(fruits)):
    print(f"Index {i} → {fruits[i]}")


