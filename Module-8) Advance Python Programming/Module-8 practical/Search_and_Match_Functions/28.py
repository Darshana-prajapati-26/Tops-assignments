# Write a Python program to search for a word in a string using re.search(). 

import re


text = input("Enter a string: ")
word = input("Enter a word to search: ")

result = re.search(word, text)

if result:
    print("Word found!", "Start index:", result.start(), "End index:", result.end())
else:
    print("Word not found!")
    