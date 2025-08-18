// 1. Array Sum and Average 
// o Write a C++ program that accepts an array of integers, calculates the sum and average, and displays the results.
//  o Objective: Understand basic array manipulation. 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    int sum = 0;

    // Input array elements
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i]; // Add each element to sum
    }

    // Calculate average
    double average = sum / n;

    // Display results
    cout << "Sum of elements: " << sum << endl;
    cout << "Average of elements: " << average << endl;

    return 0;
}
