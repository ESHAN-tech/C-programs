#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;

    q.push(11);
    q.push(12);
    q.push(13);

    cout<<"size of queue before pop = "<<q.size()<<endl;

    q.pop();

    cout<<"size of queue after pop = "<< q.size()<<endl;

    cout<< "front element of queue = "<< q.front()<<endl;

    return 0;

}