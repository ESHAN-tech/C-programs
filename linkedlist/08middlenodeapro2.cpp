#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    // Constructor (parameterized) called...
    node(int d) {
        this->data = d;
        this->next = NULL;
    }

    // Destructor to delete linked list nodes
    ~node() {
        if (this->next != NULL) {
            delete next;
            this->next = NULL;
        }
    }
};

void insertattail(node* &tail, int d) {
    // Creating a new node
    node* temp = new node(d);

    if (tail == NULL) {
        tail = temp;
        return;
    } 
    else {
        tail->next = temp;
        tail = temp;
    }
}

node* middlenode(node* &head) {
    if (head == NULL) {
        return NULL;
    }
    else if (head->next == NULL) {
        return head;
    }
    else if (head->next->next == NULL) {
        return head->next;
    }

    node* fast = head->next;
    node* slow = head;

    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}


void print(node* temp) {
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Creating a dynamic node
    node* node1 = new node(1);

    // Point head and tail to the first node
    node* head = node1;
    node* tail = node1;

    // Now perform all function calls
    insertattail(tail, 2);
    insertattail(tail, 3);
    insertattail(tail, 4);

    // Print the current linked list
    cout << "Current linked list is: ";
    print(head);

    cout<< "middle node is ="<<middlenode(head );

    return 0;
}
