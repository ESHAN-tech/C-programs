#include<iostream>
using namespace std ;

void getrowSum (int arr[][3] , int row , int col){
    
    for(int i = 0 ; i < row; i++){
        int sum = 0;
        for(int j = 0 ; j < col ; j++){
            sum=sum +arr[i][j];
        }
        cout<<" sum of row "<<sum<<" , ";
    }

    cout<<endl;

}
void getcolSum (int arr[][3] , int row , int col){
    for(int j = 0 ; j < col ; j++){
        int sum = 0;
        for(int i = 0 ; i < row; i++){
        
            sum=sum +arr[i][j];
        }
        cout<<" sum of cols "<<sum<<" , ";
    }

    cout<<endl;

}
void print(int arr[][3] , int row , int col){
    
    for(int i = 0 ; i < row; i++){
        for(int j = 0 ; j <  col ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int arr[3][3] ;

    cout<<"enter the element in matrix = "<<endl;

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cin>>arr[i][j];
        }
    }
    print(arr , 3 , 3 );

    cout <<endl ;

    cout<< "sum of rows are =>";
    getrowSum (arr, 3,3);

    cout<< "sum of cols are =>";
    getcolSum (arr, 3,3);

    return 0 ;

}