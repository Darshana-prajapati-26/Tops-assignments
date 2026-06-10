# Write a Python program to write multiple strings into a file.

# Open the file in write mode
file = open("Q8.txt", "w")

# Write multiple strings into the file
file.write("Hello, this is the first line.\n")
file.write("This is the second line.\n")
file.write("And this is the third line.\n")

# Close the file
file.close()