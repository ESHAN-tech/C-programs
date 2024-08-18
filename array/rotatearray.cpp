#include<iostream>
#include<algorithm>  // Include this for using std::swap
using namespace std;

void rotateArray(int arr[], int size, int k) {
    for (int j = 1; j <= k; j++) {
        int temp = arr[0];
        
        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[size - 1] = temp;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    rotateArray(arr, 7, 3);
    printArray(arr, 7);

    return 0;
}
//complexity is o(n^2)