#•Write a Python program to apply the map() function to square a list of numbers.
# Program to square numbers using map()
numbers = [1, 2, 3, 4, 5]

squared = list(map(lambda x: x**2, numbers))

print("Original list:", numbers)
print("Squared list:", squared)
