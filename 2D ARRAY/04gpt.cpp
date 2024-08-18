#include<iostream>
using namespace std;

void printWave(int arr[][3], int row, int col) {
    // Flag to track the direction of traversal
    bool forward = true;

    // Traverse through each column
    for (int j = 0; j < col; j++) {
        // If forward is true, print top to bottom
        if (forward) {
            for (int i = 0; i < row; i++) {
                cout << arr[i][j] << " ";
            }
        } 
        // If forward is false, print bottom to top
        else {
            for (int i = row - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
        // Toggle the direction for the next column
        forward = !forward;
    }
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Print the matrix in wave-like pattern
    cout << "Wave-like pattern: ";
    printWave(arr, 3, 3);

    return 0;
}
