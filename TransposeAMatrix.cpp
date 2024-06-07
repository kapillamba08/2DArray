#include <iostream>
using namespace std;

void transposeAMatrix(int arr[][3], int rows, int cols, int transpose[][3]) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            transpose[j][i] = arr[i][j];
        }
    }
}

void printingMatrix(int arr[][3], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[3][3];
    int rows = 3;
    int cols = 3;

    cout << "Enter elements in Matrix: ";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    cout << "Matrix before transpose: " << endl;
    printingMatrix(arr, rows, cols);

    cout << "Starting Transpose: " << endl;
    int transpose[3][3];
    transposeAMatrix(arr, rows, cols, transpose);

    cout << "Matrix after transpose: " << endl;
    printingMatrix(transpose, rows, cols);

    return 0;
}
