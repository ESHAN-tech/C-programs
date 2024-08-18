class Solution {
public:
int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            if (nums[i] != val) {
                arr.push_back(nums[i]);
            }
        }

        nums = arr; // Copy unique elements back to the original vector

        return arr.size(); // Return the size of the modified vector
    }
};