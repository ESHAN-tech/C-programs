#include<iostream>
using namespace std ;
class node{
    public:

    int data;
    node* next;

    // constructor called
    node(int d){
        this->data=d;
        this->next=NULL;        
    }
};

int middlenode(node* & head ){
    node* temp = head;
    int leng = 0;
    int mid;
    while (temp != NULL){
        leng++;
        temp=temp->next;
    }
    if (leng % 2 == 0){
        
        mid=leng/2;

    }
    else{
        mid=(leng/2)+1;
    }
    return mid;
}


int main() {
    // Creating a simple linked list for testing
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);

   // cout << "Middle node position: " << middlenode(head) << endl;
    cout << "Middle node position: " << middlenode(head) << endl;

    return 0;
}