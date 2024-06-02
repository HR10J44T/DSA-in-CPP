#include <iostream>
using namespace std;

int main() {
    int array[5] = {10, 20, 30, 40, 50};
    array[2] = 100;
    cout << "Modified array: ";
    for(int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}
