//Write a C++ program that accepts user input for their name and age and then displays a personalized greeting.
// o Objective: Practice input/output operations using cin and cout. 
#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    // Ask for user's name
    cout << "Enter your name: ";
    cin >> name;  // Using getline to allow spaces in name

    // Ask for user's age
    cout << "Enter your age: ";
    cin >> age;

    // Display personalized greeting
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    return 0;
}
