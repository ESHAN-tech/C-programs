#include<iostream>
using namespace std;

void unionarray(int arr1[] , int n , int arr2[] , int m){
    int k = 0;

    int arr3[n+m];

    for (int i = 0 ; i <  n ; i++){
        arr3[k++]= arr1[i];
    }
    for(int j = 0 ; j < m ; j++){
        arr3[k++] = arr2[j];
    }
    cout<<"output is :- ";
    for (int i = 0 ; i <  k ; i++)
    {
    cout <<arr3[i]<< " ";
    }
}

void intersection(int arr1[] , int n , int arr2[] , int m){
    //base case 
}
int main(){
    int num1[] = {1 , 2 , 3};
    int num2[] = {4,5};

    
    unionarray( num1 , 3 , num2 , 2);
    
}