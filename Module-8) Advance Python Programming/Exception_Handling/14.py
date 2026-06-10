# Write a Python program to handle file exceptions and use the finally block for closing the file.

file = None

try:
    file = open("q15.txt", "r")
    content = file.read()
    print("File Content:")
    print(content)

except FileNotFoundError:
    print("Error: File not found.")

except Exception as e:
    print(f"An unexpected error occurred: {e}")

finally:
    if file:
        file.close()
        print("File closed successfully.")