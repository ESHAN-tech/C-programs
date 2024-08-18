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

    ~node() {
        int value = this->data;
        // Memory free
        if (this->next != NULL) {
            delete next;
            this->next = NULL;
        }

        cout << "Memory is free for node with data " << value << endl;
    }
};

class Stack {
private:
    node* head;
    int top;

public:
    Stack() {
        head = NULL;
        top = -1;
    }

    void push(int d) {
        node* temp = new node(d);

        if (head == NULL) {
            head = temp;
        } else {
            temp->next = head;
            head = temp;
        }

        top++;
    }

    void pop() {
        if (top >= 0) {
            node* temp = head;
            head = head->next;
            delete temp;
            top--;
        } else {
            cout << "Stack is empty, cannot pop." << endl;
        }
    }

    int peek() {
        if (top >= 0) {
            return head->data;
        } else {
            cout << "Stack is empty." << endl;
            return -1; // Assuming -1 represents an empty stack
        }
    }

    bool isEmpty() {
        return top == -1;
    }

    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

int main() {
    Stack myStack;

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    cout << "Top element: " << myStack.peek() << endl;

    myStack.pop();

    cout << "Top element after pop: " << myStack.peek() << endl;

    return 0;
}
