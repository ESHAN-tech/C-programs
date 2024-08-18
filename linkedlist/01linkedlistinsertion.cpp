#include<iostream>
using namespace std;

class node{
    public:

    int data;
    node* next;
    // Constructor (parameterized)called...
    node(int d) {
        this->data = d;
        this->next = NULL;
    }
};

void insertatfront( node* &head ,int d){
    //creating new node temp..
    node* temp= new node(d);
    // insertion at front logic....
    temp->next=head;
    head=temp;

}

void insertattail( node* &tail, int d) {
    // creating a new node first
    node* temp = new node(d);
    if (tail == NULL) {
        tail = temp;
    } 
    else
    {
        tail->next = temp;
        tail = temp;
    }
}
void insertatposition(node* &head, int d , int position ){
    //create node ..
    node* temp =new node (d);
    node*p=head;
    for (int i=0 ; i<position-1 && p !=NULL ; i++){
        p=p->next;
    }

    if (p == NULL)

    {
        cout << "Invalid position!" << endl;
        return;
    }
    //logic part
    temp->next=p->next;
    p->next= temp;
}

void print(node* temp ){
    while (temp-> next != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
   // node n ; it's a static allocation but we have to dynamic
    node* node1 = new node(12);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    //point head to node...
    node*head=node1;
    node*tail=node1;
    //now do all function call..
    insertatfront(head, 12);
    insertattail(tail, 15);

    // Print after insert 
    insertatfront(head, 10);
    insertatfront(head, 5);
    insertattail(tail, 15);
    insertattail(tail, 20);

    print(head);

    //Insert at position 3 (between second and third nodes)
    insertatposition(head, 25, 3);

    print(head);

    return 0;
}
