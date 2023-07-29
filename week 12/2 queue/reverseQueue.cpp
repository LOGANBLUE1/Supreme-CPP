#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int>&q){
    stack<int>s;
    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }
    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }
}

void reverseQueueRecursion(queue<int>&q){
    if(q.empty()){
        return;
    }
    int temp = q.front();
    q.pop();

    reverseQueueRecursion(q);
    q.push(temp);
}

void print(queue<int>q){
        while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }cout<<endl;
}

int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    print(q);
    reverseQueueRecursion(q);
    print(q);
    return 0;
}