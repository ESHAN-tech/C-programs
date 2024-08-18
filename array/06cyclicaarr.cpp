/*
CYCLIC CYLINDER 
Input:
N = 5
A[] = {1, 2, 3, 4, 5}
Output:
5 1 2 3 4

failure :-
void cyclicroate (int arr[], int size , int position)
{//trying to solve it using two pointer approch
    int s = position ;
    int e = size -1 ;
    while(s<e)
    {swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
*/
#include<iostream>
using namespace std ;
/*
approch :- 
1)Reverse the whole array 
2)reverse from from given position 
3) reverse the rest part 
*/
void revbeforeposition (int arr[], int size , int position)
{//trying to solve it using two pointer approch
    int s = 0;
    int e = position ;
    while(s<e)
    {swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
void revafterposition (int arr[], int size , int position)
{//trying to solve it using two pointer approch
    int s = position ;
    int e = size -1 ;
    while(s<e)
    {swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

void cyclicroate (int arr[], int size , int k ){
    // step 1
    int s = 0 ;
    int e = size -1 ;
    while(s<e)
    {swap(arr[s],arr[e]);
        s++;
        e--;
    }
     revbeforeposition(arr, k , 5);
     revafterposition(arr, k , 5);
   
}
void print(int arr[] , int size ){
    for(int i = 0 ; i < size  ; i++){
        cout <<arr[i]<<" ";
    }
}

int main(){
    int num[5]={ 1 , 2 , 3 , 4 , 5 };
    
    cout<< "input array = ";
    
    print(num, 5);
    
    cyclicroate (num, 5 , 5);
    cout <<endl ;
    
    cout << "output  array =";
    
    print(num, 5);

}