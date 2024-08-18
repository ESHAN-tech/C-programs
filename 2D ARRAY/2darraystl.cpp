#include<iostream>
#include<array>
using namespace std;

void print(array<array<int, 4>, 3>& arr, int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    array<array<int, 4>, 3> arr;

    // Take input from the user
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << "Enter the element at position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Print the array
    print(arr, 3, 4);

    return 0; 
}
