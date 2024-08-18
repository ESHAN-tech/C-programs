/*

Given an array arr[] denoting heights of N towers and a positive integer K.

For each tower, you must perform exactly one of the following operations exactly once.

Increase the height of the tower by K
Decrease the height of the tower by K
Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower.

You can find a slight modification of the problem here.
Note: It is compulsory to increase or decrease the height by K for each tower. After the operation, the resultant array should not contain any negative integers.

Example 1:

Input:
K = 2, N = 4
Arr[] = {1, 5, 8, 10}
Output:
5
Explanation:
The array can be modified as 
{1+k, 5-k, 8-k, 10-k} = {3, 3, 6, 8}. 
The difference between 
the largest and the smallest is 8-3 = 5.

*/

#include<iostream>
#include<algorithm>
using namespace std;

int getMinDiff(int arr[], int n, int k) {
    // Sort the array
    sort(arr, arr + n);

    // Initialize minDiff with the difference between the heights of the first and last towers
    int minDiff = arr[n - 1] - arr[0];

    for (int i = 0; i < n - 1; i++) {
        // Calculate new heights after applying operations on current tower and next tower
        int currentTowerPlusK = arr[i] + k;
        int currentTowerMinusK = arr[i] - k;
        int nextTowerPlusK = arr[i + 1] + k;
        int nextTowerMinusK = arr[i + 1] - k;

        // Update max and min heights considering the operations on current and next towers
        int newMax = max(arr[n - 1], currentTowerMinusK);
        int newMin = min(arr[0], nextTowerPlusK);

        // Update minDiff if new difference is smaller
        minDiff = min(minDiff, newMax - newMin);
    }

    return minDiff;
}

int main() {
    int arr[] = {1, 5, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    
    cout << "Minimum possible difference: " << getMinDiff(arr, n, k) << endl;

    return 0;
}
