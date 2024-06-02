#include <iostream>
using namespace std;

int main() {
    // Declaration and initialization
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Accessing elements
    cout << "Element at first row, second column: " << matrix[0][1] << endl;  // Output: 2

    // Modifying elements
    matrix[1][2] = 10;
    cout << "Modified matrix:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    // Output:
    // 1 2 3
    // 4 5 10
    // 7 8 9

    // Traversing the matrix
    cout << "Traversing the matrix:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
