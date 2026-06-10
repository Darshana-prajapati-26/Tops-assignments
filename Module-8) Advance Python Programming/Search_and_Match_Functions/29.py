# Write a Python program to match a word in a string using re.match().

import re

text = input("Enter a string: ")
word = input("Enter a word to match: ")

result = re.match(word, text)

if result:
    print("Word matched!")
else:
    print("Word not matched!")


    # Note: re.match() checks for a match only at the beginning of the string,
    #  while re.search() checks for a match anywhere in the string.