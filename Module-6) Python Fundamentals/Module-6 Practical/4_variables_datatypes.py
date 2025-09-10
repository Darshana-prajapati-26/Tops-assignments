# q4 Write a Python program to demonstrate the creation of variables and different data types.
# python 4_variables_datatypes.py


name = input("enter your name : ")      # String
age = int(input("enter you age : "))        # Integer
height = float(input("enter your hieght"))   # Float
fav_fruits = input("eneter your favoraite fruits : ").split() # List (taking multiple inputs and converting into list)
coordinates = tuple(input("enter coordinates :").split())     # Tuple (convert list into tuple)
numbers = set(input("enter number ").split())                 # Set (removes duplicates automatically)
is_student = input("are you a student ? (yes/no) : ")         # Boolean
is_student = True if is_student == "yes" else False

print("\n--------------------output screen----------------------\n")

print("name :",name, " | datatyape :",type(name))
print("age :",age, "| datatype :",type(age))
print("height :",height, "| datatype :",type(height))
print("fav_fruits :",fav_fruits,"| datatype :",type(fav_fruits))
print("coordinate :",coordinates, "| datatype : ",type(coordinates))
print("numbers :",numbers, "| datatype :",type(numbers))
print("is_student :",is_student, "| datatype :",type(is_student))