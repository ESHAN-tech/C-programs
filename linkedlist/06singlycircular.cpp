#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    
    // Constructor................
    node(int d) {
        this->data = d;
        this->next = NULL;
    }

    // Destructor................
    ~node(){
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};

void insertNode(node* &tail, int element, int d){
    // If linked list is empty
    if(tail == NULL){
        node* temp = new node(d);
        tail = temp;
        temp->next = temp;
        return;
    }
    else{
        node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        // Element found
        node* temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }                         
}

void print(node* tail) {
    node* temp = tail;

    // Empty list
    if(tail == NULL) {
        cout << "List is Empty " << endl;
        return;
    }

    do {
        cout << tail->data << " ";
        tail = tail->next;
    } while(tail != temp);

    cout << endl;
} 

int main(){
    node* tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    return 0;
}
