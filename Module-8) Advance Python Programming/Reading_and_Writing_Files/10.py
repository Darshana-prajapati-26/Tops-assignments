# Write a Python program to check the current position of the file cursor using tell().

# Open the file
file = open("Q9.txt", "r")

# Check current cursor position
position = file.tell()
print("Current cursor position:", position)

# Read one character from the current position
char = file.read(10)
print("Character at cursor position:", char)

# Check cursor position again
print("New cursor position:", file.tell())

# Close the file
file.close()