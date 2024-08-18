/*Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity*/
#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;  // Target found, return the index
        } else if (nums[mid] < target) {
            left = mid + 1;  // Search in the right half
        } else {
            right = mid - 1;  // Search in the left half
        }
    }

    return left;  // Target not found, return the index where it should be inserted
}

int main() {
    vector<int> nums = {1, 3, 5, 7, 9, 11, 13, 15};
    int target = 8;

    int index = searchInsert(nums, target);

    cout << "Target " << target << " should be inserted at index " << index << endl;

    return 0;
}
