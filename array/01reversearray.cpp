#include<iostream>
using namespace std; 

// Function to reverse an array using two-pointer approach
void reversearray(int arr[], int n) {
    int s = 0;
    int e = n - 1;

    while (s < e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

// Function to print the elements of an array
void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Static allocation 
    int num[5] = {1, 2, 3, 4, 5}; // Added missing semicolon here

    reversearray(num, 5);
    print(num, 5);

    return 0;
} // Added semicolon here
