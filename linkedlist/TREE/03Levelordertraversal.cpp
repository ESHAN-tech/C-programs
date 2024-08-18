/*
Given a root of a binary tree with n nodes, find its level order traversal.
Level order traversal of a tree is breadth-first traversal for the tree.

Input:

    1
  /   \ 
 3     2

Output:

1 3 2

means ki level wise bas print kerwana hai 
level 1 = 1 , print (1)
level 2 = 3  , 2  ,print (3  2 )

o/p= 1,3,2

*/

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class node {

    public:
    int data;
    node* left ;
    node* right ;

    node(int val ){
        data = val;
        left = NULL;
        right = NULL;
    }

};

vector<int> LevelOrder(node* root){
    //creating a queue of node type
    queue<node*> q; //it stores the address
    q.push(root);//phele element push kiya joke root he hoga

    vector<int> ans ;// isay output store karenge

    node* temp ;//ye current node ko point karega

    while(!q.empty()){
        temp = q.front();
        q.pop();

        ans.push_back(temp->data);
        
        if(temp->left)// ager temp ka left present h to wo queue me daal do
        {
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    return ans;


}

int main(){
    node * root ;
    
    root = LevelOrder( root);

    cout<<root;

    return 0;

}
