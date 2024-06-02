#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int array[5] = {10, 20, 100, 40, 50};
    cout << "Maximum value: " << findMax(array, 5) << endl;  // Output: 100
    return 0;
}
