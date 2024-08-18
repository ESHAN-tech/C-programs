#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* left ;
    node* right ;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder (node* root ){
    int count = 0;
    //base case 
    if(root == NULL){
        return;
    }
    
    //NLR
    cout<<root->data;
    count = count + 1;
    preorder ( root -> left );
    preorder ( root -> right );

    cout<< count <<" ";

}


// Function to create a binary tree recursively
node* binarytree() {
    int x;
    cout << "Enter the value of the node (-1 for NULL): ";
    cin >> x;

    if(x == -1)
        return NULL;

    node* temp = new node(x);

    // Recursively create left subtree
    cout << "Enter the left child of " << x << ": ";
    temp->left = binarytree();

    // Recursively create right subtree
    cout << "Enter the right child of " << x << ": ";
    temp->right = binarytree();

    return temp;
}

int main() {
    cout << "Enter the value of the root node: ";
    node* root = binarytree();

    cout<<endl;
    cout<<"preorder traversal is : ";
    preorder (root );

    return 0;
}
