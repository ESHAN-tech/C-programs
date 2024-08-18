#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;

    }
    ~node(){//USED TO FREE THE ALLOCATED MEMORY
        int val= this->data;
        if (this->next != NULL){
            delete next;

            this -> next = NULL;
        }
    }

};

void insertatfront(node* &head ,int d){
   
    //create a new node...
    node* temp = new node(d);
    if(head==NULL){
        head=temp;
    }
    else{

    
    //now inserting....
    temp->next=head;
    
    
    temp->prev=NULL;
    head->prev=temp;
    head=temp;
    }

}
void insetattail( node* &tail , int d){
    //creating node...
    node* temp=new node(d);
    if(tail==NULL){
        tail=temp;
    }
    else{
        tail->next=temp;
        temp->prev=tail;
        temp->next=NULL;
        tail=temp;
    }
}


void insertatposition(node* &head, int position, int d){
    node* temp = new node(d);

    if(head == NULL){
        head=temp;
        return;

    }

    node* p = head;
    int count =0;
    //while( p!=NULL && p < position-1){ p is node so it can't be less then the integer)
    while (p!=NULL && count< position -1 ){
        p=p->next;
    }
    if(p!=NULL){
    temp->next = p->next;
    temp->prev = p;
    p->next=temp;
    
    
    }
}

void deletenode(node* &head , int position ){
    if(position == 1){
        node* temp = head;
        head = head ->next;
        temp->next = NULL;
        temp->prev = NULL;
        delete temp;
    }
    else {
        node* curr=head;
        node* prev=NULL;

        int cnt =1;
        while (cnt < position){
            prev= curr;
            curr= curr->next;
            cnt++;

        }
        prev->next=curr->next;
        curr->prev=NULL;
        curr->next=NULL;
        delete curr;
    
    }
} 




void print(node* head){
    node* temp= head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}



int main(){
    node* node1=new node(10);
    node* head=node1;
    node* tail=node1;
    print(head);
    cout<<endl;


    insertatfront(head ,15);
    cout<<"inserting at front :- ";
    print(head);
    cout<<endl;


    insetattail(tail,18);
    cout<<"inserting at the tail:- ";
    print(head);
    cout<<endl;
   
    
    insertatposition(head, 1,45 );
    cout<<"inserting 45 at position 1 :- ";
    print(head);
    cout<<endl;

    
    deletenode(head , 3 );
    cout<<"deleting node at position third :- ";
    print(head);
    cout<<endl;

    deletenode(head , 1 );
    cout<<"deleting node at position sixth :- ";
    print(head);
    cout<<endl;


    cout<<"code is working properly "<<endl;
    




    return 0;

}