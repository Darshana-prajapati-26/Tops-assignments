//2. Matrix Addition
//   o Write a C++ program to perform matrix addition on two 2x2 matrices. 
//   o Objective: Practice multi-dimensional arrays. 
#include <iostream>
using namespace std;

int main() {
    int A[2][2], B[2][2], sum[2][2];

    cout << "Enter elements of first 2x2 matrix (A):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of second 2x2 matrix (B):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> B[i][j];
        }
    }

    // Adding matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display result
    cout << "\nResultant Matrix after Addition:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
