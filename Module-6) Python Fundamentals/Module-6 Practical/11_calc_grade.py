#Practical Example 7: Calculate Grades using if-else ladder
# Program to calculate grade from percentage

percentage = float(input("Enter your percentage: "))

if percentage >= 90:
    grade = "A+"
elif percentage >= 80:
    grade = "A"
elif percentage >= 70:
    grade = "B"
elif percentage >= 60:
    grade = "C"
elif percentage >= 50:
    grade = "D"
else:
    grade = "Fail"

print("Your Grade is:", grade)
