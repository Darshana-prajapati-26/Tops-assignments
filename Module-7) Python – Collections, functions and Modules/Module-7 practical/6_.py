# •Write a Python program to sort a list using both sort() and sorted().
# Create a list of numbers
numbers = [5, 2, 9, 1, 7]

# Using sort() → changes original list
numbers.sort()
print("List after sort():", numbers)

# Using sorted() → returns a new list, original remains same
numbers2 = [5, 2, 9, 1, 7]
sorted_list = sorted(numbers2)
print("Original list:", numbers2)
print("New sorted list:", sorted_list)
