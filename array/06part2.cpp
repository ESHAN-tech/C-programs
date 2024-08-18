#include<iostream>
using namespace std;

void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void cyclicrotate(int arr[], int size, int position) {
    // Reverse the entire array
    reverse(arr, 0, size - 1);

    // Reverse the first part of the array (from 0 to position - 1)
    reverse(arr, 0, position - 1);

    // Reverse the second part of the array (from position to size - 1)
    reverse(arr, position, size - 1);
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int num[5] = {1, 2, 3, 4, 5};
    int arr[9] = {1,2,3,4,5,6,7,8,9};

    cout << "Input array = ";
    print(num, 5);

    cyclicrotate(num, 5, 1); // Rotate by 1 position

    cout << endl;
    cout << "Output array = ";
    print(num, 5);
    
    cout <<endl ;

    cout << "Input array = ";
    print(arr, 9);

    cyclicrotate(arr,9, 8); // Rotate by 1 position

    cout << endl;
    cout << "Output array = ";
    print(arr, 9);

    return 0;
}
