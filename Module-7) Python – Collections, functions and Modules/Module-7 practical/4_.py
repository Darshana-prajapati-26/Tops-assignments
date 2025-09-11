
# Write a Python program to remove elements from a list using pop() and remove().

# Create a list
fruits = ["apple", "banana", "mango", "orange"]

# Remove element by value using remove()
fruits.remove("banana")

# Remove element by index using pop()
fruits.pop(1)   # Removes element at index 1 (mango)

print("List after removing elements:", fruits)
