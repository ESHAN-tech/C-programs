#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    // Constructor
    node(int d) {
        this->data = d;
        this->next = NULL;
    }
};

// Taking reference because we want to make changes in the original linked list
// Don't want to create a copy for that 

void insertatfront(node* &head, int d) {
    // Creating a new node
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertattail(node* &tail, int d) {
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

void print(node* &head) {
    node* hipo = head;
    
    while (hipo != NULL) {
        cout << hipo->data << " ";
        hipo = hipo->next;
    }
    cout << endl;
}

int main() {
    // Creating the first node
    node* hero = new node(10);
    cout << hero->data << endl;
    cout << hero->next << endl;

    // Head pointing to node1
    node* head = hero;
    node* tail = hero;

    // Print before insert 

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
/*
node* head = node1;: Yahan head pointer ko node1 ke memory address ke sath initialize kiya ja raha hai.
Iska matlab hai ki head ab node1 ko point karega, jisse linked list ka shuruwaati node (head) tay ho gaya.

node* tail = node1;: Yahan tail pointer ko bhi node1 ke memory address ke sath initialize kiya ja raha hai.
Iska matlab hai ki tail bhi ab node1 ko point karega.
Is tarah,head aur tail dono initially node1 ko point karte hain,kyun ki yeh linked list ka pehla node hai.

*/