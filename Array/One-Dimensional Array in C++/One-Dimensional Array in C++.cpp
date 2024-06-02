#include <iostream>
using namespace std;

int main() {
    // Declaration and initialization
    int array[5] = {1, 2, 3, 4, 5};

    // Accessing elements
    cout << "First element: " << array[0] << endl;  // Output: 1
    cout << "Second element: " << array[1] << endl;  // Output: 2

    // Modifying elements
    array[2] = 10;
    cout << "Modified array: ";
    for(int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << endl;  // Output: 1 2 10 4 5

    // Traversing the array
    cout << "Traversing the array: ";
    for(int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << endl;  // Output: 1 2 10 4 5

    return 0;
}
