#include<iostream>
using namespace std;
int mergeshortedarr(int num1[] , int m, int num2[], int n , int arr[] ){
    int k=0;
    while(k < m+n){
        int ans=arr[k];

        if(k<m){

    
            for (int  i = 0 ; i<= m ; i++){
                arr[k++]=arr[i];
            
            }
        }
        else{

            for(int j = 0 ; j < n ; j++){
                arr[k++]=arr[j];
            }
        }
    }
    return arr[k];

}

void print (int arr[] , int k){
    for (int i=0 ; i< k ; i++ ){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}
int main(){
    int nums1[3] = {1,2,3};
    int nums2[2]={2,5,};

    int arr[5]={};
    cout<< mergeshortedarr( nums1 , 3, nums2 , 2 , arr );
    cout<<endl;
    print (arr, 5);


    return 0;

}

