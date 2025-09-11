# String
text = "python programming"

# Create an empty dictionary
char_count = {}

# Count each character
for char in text:
    if char in char_count:
        char_count[char] += 1
    else:
        char_count[char] = 1

print("Character count:", char_count)
