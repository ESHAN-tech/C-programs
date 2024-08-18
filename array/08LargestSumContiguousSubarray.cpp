/* 

Contiguous Subarray mtlb proper sequence me array lo bich me khai break na ho , 
or na bich me koi element left hoo...
 if all num +ve then add the entier array

 example :-
 {1,2,3,4}
 total no. Contiguous Subarray are 10 :-

 {1}                {2}         {3}         {4}
 {1 , 2}            {2,3}       {3,4}
 {1 ,2 ,3}          {2,3,4}
 {1 , 2 ,3 , 4}

 here answer is  {1 , 2 ,3 , 4}

approch 1 (solving problem using brute force ):-


*/

#include<iostream>
using namespace std;

class solution {
    public :
    int maxsubarray (int arr[] ){
        int max = Integer.MIN_VALUE;
        for(int i =0 ; i<arr.lenght; i++){
            for(int j = i ; j< arr.lenght ; j++){
                int sum =0;
                for(int k =0 ; k<=j ; k++){
                    sum = sum + arr[k];
                }
                max = Math.max(sum , max );//max var me max value stored 
            }
        }
        return max ;
    }

};

int main() {
    int num[4] = {1, 2, 3, 4};
    int size = 4

    Solution s1;
    int maxSum = s1.maxSubarray(num, 4);
    
    cout << "Maximum sum of contiguous subarray: " << maxSum << endl;

    return 0;
}