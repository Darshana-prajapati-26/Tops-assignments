# String manipulation example
text = "  hello, python world!  "

# Convert to uppercase
print("Uppercase:", text.upper())

# Convert to lowercase
print("Lowercase:", text.lower())

# Remove leading and trailing spaces
print("Stripped:", text.strip())

# Replace 'python' with 'Python'
print("Replace:", text.replace('python', 'Python'))

# Split the string into a list
print("Split:", text.split(','))

# Check if string starts with 'hello'
print("Starts with 'hello':", text.strip().startswith("hello"))

# Check if string ends with 'world!'
print("Ends with 'world!':", text.strip().endswith("world!"))

# Capitalize the first letter
print("Capitalized:", text.strip().capitalize())
