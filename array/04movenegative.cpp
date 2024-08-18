/*
Move all negative numbers to beginning and positive to end with constant extra space
An array contains both positive and negative numbers in random order. 
Rearrange the array elements so that all negative numbers appear before all positive numbers.

failure attempt:-
void union (int arr1[] , int arr2[]){

}

void movenegative (int arr[] , int ans1[] , int ans2[] ,int size ){

    for(int i = 0 ; i < size ; i++){
        if(arr[i]<0){
            arr[i] = ans1[i];
        }
        else{
            arr[i]= ans2[];
        }

    }
    union(ans1[] , ans2[]);

}

*/


#include<iostream>
using namespace std ;

//here we try to solve it using 2 pointer approch 

void movenegative (int arr[] , int size ){
    int s = 0 ;
    int e = size -1;

    while (s<e)
    {
        //Is loop ka kaam hai array ke left side se pehla non-negative element dhundhna.
        while (arr[s] < 0 && s < e) {

            s++;
        }
        //Is loop ka kaam hai array ke right side se pehla negative element dhundhna.
        while (arr[e] >= 0 && s < e) {
            e--;
        }
        if (arr[s]>arr[e])
        {
            swap(arr[s] , arr[e]);
            s++;
            e--;
        }
       
    }
    
}

void print(int arr[] , int size ){
    
    for (int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }

}


int main(){
    int num [9]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    cout<<"input array is =";
    print(num, 9) ;
    movenegative ( num , 9 );
    cout << endl ;
    cout << "output array is =";
    print(num, 9) ;
    return 0;


}