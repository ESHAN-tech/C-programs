/* phela code jo kudse logic build kar k kiyaa */

#include<iostream>
using namespace std ;

void getlargestrowSum (int arr[][3] , int row , int col){
    int ans =-9999;
    
    for(int i = 0 ; i < row; i++){
        int sum = 0;
        for(int j = 0 ; j < col ; j++){
            sum=sum +arr[i][j];
        }

        if (ans < sum){
        ans = sum;
    }
    }

    cout << " largest row sum is = "<< ans ;
    cout<<endl ;


    cout<<endl;

}
void getlargestcolSum (int arr[][3] , int row , int col){
    int ans = -9999;
    for(int j = 0 ; j < col ; j++){
        int sum = 0;
        for(int i = 0 ; i < row; i++){
        
            sum=sum +arr[i][j];
        }
        cout<<sum<<" , ";
    

        if (ans < sum){
        ans = sum;
    }
    }
    cout << " largest row sum is = "<< ans ;
    cout<<endl ;

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

    
    getlargestrowSum (arr, 3,3);

    cout<<endl<<endl;

   
    getlargestcolSum (arr, 3,3);

    return 0 ;

}