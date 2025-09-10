#Practical Example 3: Find a specific string in the list using for + if
# Program to search for a specific fruit in the list

List1 = ['apple', 'banana', 'mango']
search = input("Enter fruit to search: ")

found = False
for fruit in List1:
    if fruit == search:
        print(search, "is found in the list")
        found = True
        break

if not found:
    print(search, "is not found in the list")