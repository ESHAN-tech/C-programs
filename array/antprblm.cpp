#include<iostream>
using namespace std;


class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int n=nums.size();
        int sum=0,count=0;
        for(int i=0 ; i<n ; i++){
            sum+=nums[i];
            if(sum==0) count++;

        }
        return count;
        
    }
};

int main(){

}