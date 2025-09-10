#Practical Example 4: Print Pattern using Nested for loop
# Program to print a right-angle triangle pattern

rows = 5
for i in range(1, rows + 1):
    for j in range(i):
        print("*", end="")
    print()
