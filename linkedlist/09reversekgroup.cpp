#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

//constructor is called 
    node(int d) {
        this->data = d;
        this->next = NULL;
    }
};

node* kreverse(node* &head , int k){
    //base class..............

    if(head == NULL){
        return NULL;

    }
    //step 1:- reverse first node ......
    node* frwd = NULL;
    node* curr = head;
    node* prev = NULL;
    int cnt = 0;
    
    while(curr!=NULL && cnt <k){
        frwd = curr->next;
        curr->next = prev; 
        prev = curr;
        curr = frwd;
        cnt++;
    }
    //step 2nd  recursion dek legaaa......
    if(frwd!=NULL){
        head->next=kreverse(frwd ,  k);
    }

    //step 3rd returning the answer....
    return prev;

}



void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);

    cout << "Original linked list: ";
    print(head);

    int k = 2; // Specify the value of k
    head = kreverse(head, k);

    cout << "Linked list after reversing every " << k << " nodes: ";
    print(head);
   
    return 0;
}
