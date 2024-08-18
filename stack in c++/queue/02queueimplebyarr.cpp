#include<iostream>
using namespace std;

class queue {

    public:

    int front ;
    int rare ;
    int *arr;
    int size ;
    
    queue(int size ){
        this->size = size ;
        arr = new int[size];
        front = 0;
        rare = 0;
        
    }

    // push in queue

    void push(int element){
        if(size - rare >= 1){
            
            arr[rare] = 
        }
    }

};