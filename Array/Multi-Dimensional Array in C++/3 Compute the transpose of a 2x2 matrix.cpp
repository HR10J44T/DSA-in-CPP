#include <iostream>
using namespace std;

void transpose(int matrix[2][2], int transposed[2][2]) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int matrix[2][2] = {
        {1, 2},
        {3, 4}
    };
    int transposed[2][2];
    transpose(matrix, transposed);

    cout << "Original matrix:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transposed matrix:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
