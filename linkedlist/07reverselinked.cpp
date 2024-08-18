#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int d) {
        this->data = d;
        this->next = NULL;
    }
};

void reverselinkedlist(node*& head) {
    node* prev = NULL;
    node* curr = head;
    node* frwd = NULL;

    while (curr != NULL) {
        frwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = frwd;
    }

    head = prev; // update the head to the new starting node
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

    reverselinkedlist(head);

    cout << "Linked list after the reverse: ";
    print(head);

    return 0;
}
