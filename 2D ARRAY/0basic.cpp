#include<iostream>
#include<array>
using namespace std;

//creating 2D matrix 

void print (int arr[][4] , int row , int col){
   
    for (int i = 0 ; i < row ; i++){
        for (int j = 0 ; j < col ; j++){
            cout << arr[i][j]<<" ";
        
        }
        cout<< endl ;
    }

}

int main(){
    int arr2 [3][4] = {{1,11,111,1111} , {2,22,222,2222} , {3,33,333,3333} };
    int arr[3][4];

    //here we take input from user 

    for (int i = 0 ; i < 3 ; i++){
        for (int j = 0 ; j < 4 ; j++){
            cout << "enter the element at position [" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
    cout<<"this is 2d array 1st="<< endl;
    print(arr , 3 , 4);

    cout <<endl <<endl ;

    cout<<"this is 2d array 2nd="<<endl ;
    print(arr2 , 3 , 4);
    return 0;
}

/*
NOTE:- for taking colum wise input

for (int i = 0 ; i < 4 ; i++){
        for (int j = 0 ; j < 3 ; j++){ 

JUST INTERCHANGE THEM
*/
