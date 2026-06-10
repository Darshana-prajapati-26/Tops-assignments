# Write a Python program to demonstrate the use of super() in inheritance.

class stu_name:
    def __init__(self, name):
        self.name = name

class Stu_roll(stu_name):
    def __init__(self, name, roll):
        super().__init__(name)
        self.roll = roll

    def display(self):
        print("Name:", self.name)
        print("Roll No:", self.roll)

s = Stu_roll("Darshana", 101)
s.display()