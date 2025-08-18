//   3. String Palindrome Check 
//   o Write a C++ program to check if a given string is a palindrome (reads the same forwards and backwards). 
// o Objective: Practice string operations.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str; // Reads single word without spaces

    int len = str.length();
    bool isPalindrome = true;

    // Check characters from both ends
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}
