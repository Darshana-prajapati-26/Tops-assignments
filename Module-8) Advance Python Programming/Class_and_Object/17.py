# Write a Python program to demonstrate the use of local and global variables in a class.

# Global variable
city = "Surat"

class Person:

    def details(self):
        # Local variable
        name = input("Enter your name: ")

        print("Name:", name)
        print("City:", city)

person1 = Person()
person1.details()