#Practical Example 8: Check Blood Donation Eligibility using Nested if

# Program to check blood donation eligibility

age = int(input("Enter your age: "))
weight = int(input("Enter your weight in kg: "))

if age >= 18:
    if weight >= 50:
        print("You are eligible to donate blood")
    else:
        print("You are NOT eligible (weight is less than 50kg)")
else:
    print("You are NOT eligible (age is less than 18)")
