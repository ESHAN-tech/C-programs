#include<iostream>
using namespace std;

class circularqueue{
    public:

    int front ;
    int rear ;
    int *arr;
    int size ;
    circularqueue(){
        size =100;
        front = -1 ;
        rear = -1 ;
        arr = new int [size];

        
    }
    /*
    (front == 0 && rear == size - 1) === yaha per front = 0 hai mtbl 
    ek be element abhi tak pop ni hua h or rare size -1 hai mtlb ki 
    end h jisse wo starting me be insert ni kar skta hai
    (rear == (front-1)%(size-1) === 
    circular increment karne k liye like 5 per chale gaye joke last
    element tha or ab ch rahe h wapas zero per jaye to (i+1)%size
    if ((rear +1 % size)== front )
 dekho yaha pr % ka logic ye hai ki jab tak size se kam rahega tab 
 tak to same wahi num ayega mod karne par but jab rare size k equal
 ho jayega to wo size % size = 1 ayega mtlb wapus se starting index per 
 chala jayega
    */

    bool enqueue(int value){
        // here queue is empty
        if (front == -1 && rear == -1 ){
            // front or rare ko intialize kerte hai for the insertion
            front = rear = 0;
            arr[rear]=value;
            
        }
        // if queue is full
        else if (((rear + 1)%size)==front){
            cout<<" queue is full "<<endl;
            return false;    
        }

        else {
            //here we can't directely increment the rear as it will become 5(size+1)
            rear = (rear +1)%size; // increment in circular queue order
            arr[rear]= value ;
        }
    }

    void dequeue (){
        //case 1 :- check empty condition 
        if(front == -1 && rear == -1 ){
            return;        
        }
        //case 2:- if there is only one element 
        else if (front == rear){
            front = rear = -1 ;// now queue will become empty 
        }
        // case 3:- 
        else{
            front = (front +1)%size ;
        }

    }


    void printQueue() {
        if (front == -1 && rear == -1) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        int i = front;
        while (i != rear) {
            cout << arr[i] << " ";
            i = (i + 1) % size;
        }
        cout << arr[rear] << endl;
    }
};




int main() {
    circularqueue q;
     q.enqueue(1);
     q.enqueue(2);
     q.enqueue(3);
     q.enqueue(4);
     q.enqueue(5);

    q.printQueue();

    dequeue ();

    cout<< "after dequue";
    q.printQueue();

    return 0;
}