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
    // node ko delete kerne k baaad memory free ker dena hai...
    ~node(){
        //storing the curent value
        int val=this->data;
        if (this ->next != NULL){
            delete next ;

            this->next =NULL;

        }

    }

};

void insertatfront(node* &head, int d) {
    // Creating a new node
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

/*
// Case: Delete at starting index (my method)
void delfrontnode(node* &head) {
    if (head == NULL) {
        return;
    }
    node* temp = head;
    head = head->next;
    delete temp;
}
*/

// case 1  deleting firt node love babber method..
void deletenodeatanyposition (int position , node* &head){
    if(position == 1){
        //it's a head node...
        node* temp = head;
        head=head->next;

        temp->next=NULL;

        delete head;
        //then free up the meomory (distructor....)


    }
    else {
         node* prev = NULL;
         node* curr = head;

         int cnt=1;
         while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;


         }
         prev ->next =curr->next ;
         curr->next=NULL;
         delete curr;
    }
}
// Case: Delete the last element
void deltailnode(node* &head, node*& tail) {
    if (tail == NULL) {
        return;
    }
    if (head == tail) {
        delete head;
        head = tail = NULL;
        return;
    }
    node* p = head;
    while (p->next != tail) {
        p = p->next;
    }
    delete tail;
    tail = p;
    tail->next = NULL;
}

// Case: Delete at a given position
/*void delatposition(node* &head, int position) {
    if (head == NULL) {
        return;
    }
    if (position == 0) {
        delfrontnode(head);
        return;
    }
    node* p = head;
    node* q = p->next;
    for (int i = 0; i < position - 1 && p != NULL; i++) {
        p = p->next;
        if (q != NULL) {
            q = q->next;
        }
    }
    if (p != NULL && q != NULL) {
        p->next = q->next;
        delete q;
    }
}*/

// Print the linked list
void print(node* &head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node* node1 = new node(10);

    // Pointing head and tail;
    node* head = node1;
    node* tail = node1;

    insertatfront(head, 30);
    insertatfront(head, 50);
    insertatfront(head, 60);
    insertatfront(head, 70);

    cout << "Original Linked List: ";
    print(head);

    // Deleting front
    //delfrontnode(head);
   //cout << "Linked List after deleting front: ";
    //print(head);

    // Deleting tail
    deltailnode(head, tail);
    cout << "Linked List after deleting tail: ";
    print(head);
    cout << "Linked List after deleting at given position : ";
    deletenodeatanyposition (3 , head);
    print(head);

    return 0;
}
