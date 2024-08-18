#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class node {
    public:

    int data;
    node * left ;
    node * right;

    node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

//TRAVERSAL PART 
void preorder (node* root ){
    //base case 
    if(root == NULL){
        return;
    }

    //NLR
    cout<<root->data;
    preorder ( root -> left );
    preorder ( root -> right );

}

void inorder (node* root ){
    //base case 
    if(root == NULL){
        return;
    }

    //LNR 
    inorder ( root -> left );
    cout<<root->data;
    inorder ( root -> right );

}

void postorder (node* root ){
    //base case 
    if(root == NULL){
        return;
    }

    //LRN 
    postorder ( root -> left );
    postorder ( root -> right );
    cout<<root->data;
}

// YAHA PER LEFT SIDE SE INSERT KERTE HAI
node* binarytree(){
    int x;

    cin>>x;

    if(x == -1)
    return NULL;

    node* temp = new node(x);


    //FOR LEFT PART THE WHOLE FUNCTION GET CALLED
    cout<<"enter the left child of"<<x<< " = ";
    temp->left = binarytree();

    //yaha naya node create ker deta left side 
    //or ager -1 then retun NULL then it further goes to rgt part

    //FOR RIGHT PART THE WHOLE FUNCTION GET CALLED
    cout<<"enter the right child of"<<x<< " = ";
    temp->right =binarytree();

    // YAHA ADDRESS RETURN KER RAHA ROLL BACK HONE PAR
    return temp ;

}

int main(){
    cout<<"enter the root node =";
    node * root;
    //tree creation 
    root = binarytree();
    
    cout<<endl;
    cout<<"preorder traversal is : ";
    preorder (root );

    cout<<endl;
    cout<<"inorder traversal is : ";
    inorder (root );


    cout<<endl;
    cout<<"postorder traversal is : ";
    postorder (root );
    
}

/*

             1

        2           7

    3        6             8

4       5           9           10

*/