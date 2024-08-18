#include<iostream>
using namespace std;

class stack {
public:
    //Properties...
    int *arr;
    int top;
    int size;

    //Constructor
    stack(int size) {
        this->size = size;
        this->top = -1;
        //Array dynamically created...
        arr = new int[size];
    }

    void push(int element) {
        if (top < size - 1) {
            top++;
            arr[top] = element;
        } else {
            cout << "Stack is overflow" << endl;
        }
    }

    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "Stack is underflow" << endl;
        }
    }

    int peek() {
        if (top >= 0) {
            return arr[top];
        } else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isempty() {
        return top < 0;
    }

    void printstack() {
        int temp = top;
        while (temp >= 0) {
            cout << arr[temp] << " ";
            temp--;
        }
        cout << endl;
    }
};

int main() {
    stack harsh(5);
    harsh.push(2);
    harsh.push(3);
    harsh.push(4);
    harsh.push(5);

    cout << "Original Stack: ";
    harsh.printstack();

    harsh.pop();
    cout << "Stack after pop: ";
    harsh.printstack();

    cout << "Top element of the stack: " << harsh.peek() << endl;

    cout << "Is the stack empty? " << (harsh.isempty() ? "Yes" : "No") << endl;

    return 0;
}
