# Two lists
keys = ["name", "age", "city"]
values = ["Darshana", 21, "Ahmedabad"]

# Create an empty dictionary
my_dict = {}

# Use a for loop to combine lists into a dictionary
for i in range(len(keys)):
    my_dict[keys[i]] = values[i]

print("Dictionary from two lists:", my_dict)
