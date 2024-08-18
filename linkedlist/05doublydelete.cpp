#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    // starting condition of node.........
    node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;

    }
     //destructor
    ~node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

void insertatfront(node*& head ,int d){
    //creating node ..
    node* temp=new node(d);

    //inserting front logic...
    if (head==NULL){
        head= temp;
        return;
    }
    else{
    temp->next = head;
    temp->prev =NULL;
    head->prev=temp;
    head=temp;
    }

}
void insertatlast(node*&head , node* &tail ,int d ){
    //creating the node ...
    node* temp = new node(d);
    // logic for the code 
    if(tail == NULL && head == NULL){
        head = tail = temp ;
        return ;

    }
    else {
        tail->next = temp;
        temp->prev = tail ;
        tail=temp;
    }
    
    
}
void insertatposition(node* & head , int position ,int d){
    //creating an node to insert 
    node* temp = new node (d);
    //logic of code....
    //node * pree=NULL;
    node * curr=head;
    int cnt =1;
    while (cnt <= position-1){
        //pree = curr;
        curr=curr->next;
        cnt++;


    }
    temp->next=curr->next;
    temp->prev=curr;
    curr->next= temp;


}


void print (node* & head){
    node* temp = head ;
    while (temp != NULL){
        cout<<temp->data<<" ";
        temp= temp-> next;
    

    }cout<<endl;
}

int main()
{

    node * node1 = new node(10);
    node* head= node1;
    node* tail= node1;

    insertatfront(head ,15);
    cout<<"linked list after the head insertion =";
    print (head);

    insertatlast(head , tail ,20 );
    cout<<"linked list after the tail insertion =";
    print (head);

    insertatposition(head , 2 ,25 );
    cout<<"linked list after the tail insertion =";
    print (head);

    return 0;



}