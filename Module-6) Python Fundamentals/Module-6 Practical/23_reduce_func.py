#  •Write a Python program that uses reduce() to find the product of a list of numbers.

from functools import reduce

# Program to find product using reduce()
numbers = [1, 2, 3, 4, 5]

product = reduce(lambda x, y: x * y, numbers)

print("List:", numbers)
print("Product of numbers:", product)
