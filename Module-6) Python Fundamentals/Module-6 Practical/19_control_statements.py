#Practical Example 1 – Skip 'banana' using continue
List1 = ['apple', 'banana', 'mango']

for fruit in List1:
    if fruit == 'banana':
        continue  # Skip 'banana'
    print(fruit)

#Practical Example 2 – Stop the loop when 'banana' is found using break
List1 = ['apple', 'banana', 'mango']

for fruit in List1:
    if fruit == 'banana':
        break  # Stop the loop
    print(fruit)