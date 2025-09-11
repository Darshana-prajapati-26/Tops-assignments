#Write a Python program to merge two lists into one dictionary using a loop.

# Two lists
keys = ["name", "age", "city"]
values = ["Darshana", 21, "Ahmedabad"]

# Create dictionary using a loop
my_dict = {}
for i in range(len(keys)):
    my_dict[keys[i]] = values[i]

print("Dictionary from two lists:", my_dict)
