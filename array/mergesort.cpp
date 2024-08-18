/* here we use recursion method using merge sort 
len1 = mid - s + 1 
aur yaha 1 add karke isliye kyunki humein total elements ki count chahiye aur array indexing 0 se start hoti hai.

*/


#include<iostream>
using namespace std;

void merge(int *arr , int s , int mid, int e) {
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // Creating two arrays
    int *first = new int[len1];
    int *second = new int[len2];

    // Inserting elements into the arrays
    for (int i = 0; i < len1; i++) {
        first[i] = arr[s + i];
    }

    for (int i = 0; i < len2; i++) {
        second[i] = arr[mid + 1 + i];
    }

    // Merge the two sorted arrays
    int index1 = 0;
    int index2 = 0;
    int k = s;

    while (index1 < len1 && index2 < len2) {
        if (first[index1] <= second[index2]) {
            arr[k++] = first[index1++];
        } else {
            arr[k++] = second[index2++];
        }
    }

    // Copy the remaining elements of first array
    while (index1 < len1) {
        arr[k++] = first[index1++];
    }

    // Copy the remaining elements of second array
    while (index2 < len2) {
        arr[k++] = second[index2++];
    }

    // Free the dynamically allocated memory
    delete [] first;
    delete [] second;
}

void mergeSort(int *arr , int s  , int e ) {
    // Base case
    if (s < e) {
        int mid = s + (e - s) / 2;

        // Sort the left part
        mergeSort(arr, s, mid);

        // Sort the right part
        mergeSort(arr, mid + 1, e);

        // Merge the two sorted parts
        merge(arr, s, mid, e);
    }
}

int main() {
    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;

    mergeSort(arr, 0, n-1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
