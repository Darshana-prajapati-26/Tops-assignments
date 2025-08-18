/*Write two small programs: one using Procedural Programming (POP) to calculate the area of a rectangle, 
and another using Object-Oriented Programming (OOP) with a class and object for the same task.
o Objective: Highlight the difference between POP and OOP approaches */

// Procedural Programming Example(pop)
#include <stdio.h>

// Function to calculate area
float calculateArea(float length, float width) {
    return length * width;
}

int main() {
    float length, width, area;

    // Take input
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter width: ");
    scanf("%f", &width);

    // Call function and display result
    area = calculateArea(length, width);
    printf("Area of rectangle = %.2f\n", area);

    return 0;
}
// Object-Oriented Programming Example(oop)
#include <iostream>
using namespace std;

class Rectangle {
    float length, width; // Data (attributes)

public:
    // Method to take input
    void getData() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    // Method to calculate and display area
    void displayArea() {
        float area = length * width;
        cout << "Area of rectangle = " << area << endl;
    }
};

int main() {
    Rectangle rect; // Create object
    rect.getData();
    rect.displayArea();
    return 0;
}
