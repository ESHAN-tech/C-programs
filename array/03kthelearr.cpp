#include <iostream>
#include <algorithm>
using namespace std;

int kthSmallest(int arr[], int n, int k) {
    // Sort the array
    sort(arr, arr + n);

    // Return the Kth smallest element
    return arr[k - 1];
}
int kthlargest(int arr[], int n, int k) {
    // Sort the array
    sort(arr, arr + n);

    // Return the Kth smallest element
    int s=0 , e=n-1 ;
    //reverse the array 
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    return arr[k - 1];
}

int main() {
    int arr[6] = {3,4,7,10,15,20};
    int n = 6;
    int k = 3;

    int kthSmallestElement= kthSmallest(arr, n, k);
    int kthlargestElement = kthlargest(arr, n, k);

    cout << "Kth smallest element is: " << kthSmallestElement << endl;
    cout << "Kth largest element is: " << kthSmallestElement << endl;

    return 0;
}
