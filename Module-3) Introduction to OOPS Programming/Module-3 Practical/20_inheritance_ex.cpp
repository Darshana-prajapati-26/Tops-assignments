// 3. Inheritance Example 
// o Write a program that implements inheritance using a base class Person and derived classes Student and Teacher. Demonstrate reusability through inheritance. 
// o Objective: Learn the concept of inheritance.
#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void setDetails(string n, int a) {
        name = n;
        age = a;
    }

    void displayDetails() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

// Derived class: Student
class Student : public Person {
private:
    string course;

public:
    void setStudentDetails(string n, int a, string c) {
        setDetails(n, a); // Reuse base class method
        course = c;
    }

    void displayStudentDetails() {
        displayDetails(); // Reuse base class method
        cout << "Course: " << course << endl;
    }
};

// Derived class: Teacher
class Teacher : public Person {
private:
    string subject;

public:
    void setTeacherDetails(string n, int a, string s) {
        setDetails(n, a); // Reuse base class method
        subject = s;
    }

    void displayTeacherDetails() {
        displayDetails(); // Reuse base class method
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student s1;
    Teacher t1;

    s1.setStudentDetails("Alice", 20, "Computer Science");
    t1.setTeacherDetails("Mr. John", 45, "Mathematics");

    cout << "\n--- Student Details ---\n";
    s1.displayStudentDetails();

    cout << "\n--- Teacher Details ---\n";
    t1.displayTeacherDetails();

    return 0;
}
