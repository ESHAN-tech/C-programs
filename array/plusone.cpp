/*plus One

Companies
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits*/
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] == 9) {
                digits[i] = 0;  // If the current digit is 9, set it to 0
            } else {
                digits[i]++;    // If the current digit is not 9, increment it by one
                return digits;  // No need to carry, return the result
            }
        }

        // If we reach here, it means all digits were 9, so we need to add a new digit at the beginning
        digits.insert(digits.begin(), 1);

        return digits;
    }
};
