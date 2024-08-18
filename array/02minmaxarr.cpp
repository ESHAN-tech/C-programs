#include<iostream>
using namespace std ;

int maxelement (int *arr , int size )
{
    int max = 0;
   
    
    for (int i = 0  ;  i < size ; i++)
    {
        if(max < arr[i])
        {
           max = arr[i];
        }
      
    }
    return max;

}
int minelement (int *arr , int size )
{
    int min = 9999;
   
    
    for (int i = 0  ;  i < size ; i++)
    {
        if(min > arr[i])
        {
           min = arr[i];
        }
      
    }
    return min;

}

int main(){
    int num [5] = {3 , 78 , 8 , 6 ,43};
    cout<<"max element is "<<maxelement (num, 5);
    cout<<endl;
    cout<<"min element is "<<minelement (num, 5);
    cout<<endl;
    return 0 ;
}