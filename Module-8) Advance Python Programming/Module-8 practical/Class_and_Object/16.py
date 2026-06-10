# Write a Python program to create a class and access its properties using an object

class student:

    def __init__(self,name,age):

        self.name = name 
        self.age = age 

s1 = student("darshana",20)

print("name : ",s1.name)
print("age : ",s1.age)
        