#include<iostream>
#include<queue>
using namespace std;

class Node {
    //doubly linked list
    public:
    int data;
    Node* left;
    Node* right;
    //constructor called 
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
}; // Added semicolon at the end of class definition

int main (){
    //creating root node
    int x ;
    cout <<"enter the root element = ";
    cin >> x;

    //left and right node value 
    int first ,second ;

    // queue is created 
    queue<Node*> q;

    Node *root = new Node(x);//root node created
    q.push(root);

    //build the binary Tree

    while(!q.empty())//creation kero jab tak queue khali na ho jaye
    {
        Node *temp = q.front();// node created like 1 , 2 , 3

        q.pop();// pop reason mentioned below

        cout<<"enter left value of temp =";
        cin >> first; // left child value

        //left node 
        if(first!=-1)

        {
            temp->left = new Node(first);
            q.push(temp->left);// queue me address dall diay
        }
        
        
        cout <<"enter the value of right temp = ";
        cin >> second; // right child value

        if(second!=-1)// -1 ni hai to create kero
        {
            temp->right = new Node(second);
            q.push(temp->right);// queue me address dall diay
        }

        return 0 ;
    }
 
}

/*
some concepts:-

 Node *temp = q.front();
        q.pop(); 
        above line ka concept
Queue ka basic concept hota hai "First In, First Out" (FIFO),
 yaani jo bhi element pehle aata hai queue mein, wahi sabse pehle bhi nikalta hai.

Jab hum `q.front()` ka use karte hain, 
hum sirf queue ka pehla element access kar rahe hote hain,
 lekin humein generally wahi element ka use karna hota hai aur uske baad use queue se hata dena hota hai taki hum agli values ke liye space ban sakein.

Isliye, `q.pop()` ka use kiya jata hai taaki hum pehle wala element queue se hata dein aur agle elements ke liye space create ho jaye.
 Agar hum ye nahi karte,
 to queue mein wahi element baar baar repeat ho jayega aur hum phir se same element par hi atak jayenge, 
 infinite loop mein fas jayenge.
*/