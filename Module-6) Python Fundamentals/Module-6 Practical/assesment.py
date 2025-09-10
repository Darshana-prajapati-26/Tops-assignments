# Assessment:
# •Create a mini-project where students combine conditional statements, loops, and functions to create a basic Python application, such as a simple calculator or a grade management system.


# Function to calculate grade based on marks
def calculate_grade(marks):
    if marks >= 90:
        return 'A+'
    elif marks >= 80:
        return 'A'
    elif marks >= 70:
        return 'B+'
    elif marks >= 60:
        return 'B'
    elif marks >= 50:
        return 'C'
    else:
        return 'F'

# Function to input student details
def input_students():
    students = {}
    n = int(input("Enter number of students: "))
    for i in range(n):
        name = input(f"Enter name of student {i+1}: ")
        marks = float(input(f"Enter marks for {name}: "))
        students[name] = marks
    return students

# Function to display students and their grades
def display_grades(students):
    print("\nStudent Grades:")
    print("-----------------------")
    for name, marks in students.items():
        grade = calculate_grade(marks)
        print(f"{name}: Marks = {marks}, Grade = {grade}")

# Main program loop
def main():
    while True:
        print("\n--- Grade Management System ---")
        print("1. Add Students and Marks")
        print("2. Display Grades")
        print("3. Exit")
        choice = input("Enter your choice (1-3): ")

        if choice == '1':
            students = input_students()
        elif choice == '2':
            try:
                display_grades(students)
            except NameError:
                print("No student data available. Please add students first.")
        elif choice == '3':
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid choice! Please select 1, 2, or 3.")

# Run the program
if __name__ == "__main__":
    main()
