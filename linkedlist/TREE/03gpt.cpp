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
    node * root = new node(1); // creating a root node and adding left and right children
    root->left = new node(3);
    root->right = new node(2);

    vector<int> result = LevelOrder(root); // perform level order traversal

    // print the result
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) {
            cout << " ";
        }
    }

    return 0;

}
