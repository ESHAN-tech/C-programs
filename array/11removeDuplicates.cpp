#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }

    int n = nums.size();
    int uniqueCount = 1; // At least the first element is unique

    for (int i = 1; i < n; ++i) {
        if (nums[i] != nums[i - 1]) {
            nums[uniqueCount] = nums[i];
            ++uniqueCount;
        }
    }

    return uniqueCount;
}

int main() {
    // Example usage
    std::vector<int> nums = {1, 1, 2};

    int uniqueCount = removeDuplicates(nums);

    std::cout << "Number of unique elements: " << uniqueCount << std::endl;

    // Print the modified array with unique elements
    std::cout << "Modified array: ";
    for (int i = 0; i < uniqueCount; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
