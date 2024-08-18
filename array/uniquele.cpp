#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size(); // Corrected to use size() instead of sizeof()
        int result = 0;

        for (int i = 0; i < n; i++) {
            result ^= nums[i];
        }

        return result;
    }
};

int main() {
    // Example usage
    Solution sol;
    vector<int> nums = {4, 2, 5, 2, 4};

    int result = sol.singleNumber(nums);

    cout << "The single number is: " << result << endl;

    return 0;
}
