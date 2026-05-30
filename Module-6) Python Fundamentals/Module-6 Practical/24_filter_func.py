#  •Write a Python program that filters out even numbers using the filter() function.
# Program to filter out even numbers
numbers = [1, 2, 3, 4, 5, 6, 7, 8]

odd_numbers = list(filter(lambda x: x % 2 != 0, numbers))

print("Original list:", numbers)
print("Odd numbers:", odd_numbers)
