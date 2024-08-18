#include<iostream>
using namespace std;

void waveprint(int arr[][3], int row, int col) {
    for (int j = 0; j < col; j++) {
        // Check if the column index is odd
        if (j & 1) {
            // Print the column in reverse order
            for (int i = row - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        } else {
            // Print the column in normal order
            for (int i = 0; i < row; i++) {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
}
void waveprint2 (int arr[][3], int row, int col) {
    for (int i = 0; i< row ; i++) {
        // Check if the column index is odd
        if (i & 1) {
            // Print the column in reverse order
            for (int j= col - 1; j >= 0; j--) {
                cout << arr[i][j] << " ";
            }
        } else {
            // Print the column in normal order
            for (int j = 0; j < row; j++) {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int arr[3][3];

    // Input from the user
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter the element at position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Printing the 2D array in wave-like pattern
    cout << "Wave-like pattern:" << endl;
    waveprint(arr, 3, 3);

    cout <<endl;

    cout << "Wave-like pattern:" << endl;
    waveprint2(arr, 3, 3);


    return 0;
}
