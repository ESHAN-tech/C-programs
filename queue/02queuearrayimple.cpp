#include<iostream>
using namespace std;

class queue {
public:
    int rare;
    int front;
    int *arr;
    int size;

    queue() {
        size = 100;
        front = 0;
        rare = 0;
        arr = new int[size];
    }

    void enqueue(int data) {
        if (rare == size - 1) {
            cout << "Queue is full" << endl;
        }
        else {
            arr[rare] = data;
            rare++;
        }
    }

    int dequeue() {
        if (front == rare) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if (front == rare) {
                front = 0;
                rare = 0;
            }
            return ans;
        }
    }

    int fronta() {
        if (front == rare) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else {
            return arr[front];
        }
    }

    bool isempty() {
        if (front == rare) {
            return true;
        }
        else {
            return false;
        }
    }

    void printqueue() {
        if (front == rare) {
            cout << "Queue is empty" << endl;
        }
        else {
            for (int i = front; i < rare; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    
    cout << "our queue: ";
    q.printqueue();

    cout << "dequeue element: ";
    cout << q.dequeue() << endl;

    return 0;
}
