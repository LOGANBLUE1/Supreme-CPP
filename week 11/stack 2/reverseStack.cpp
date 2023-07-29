#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&s,int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    int temp = s.top();
    s.pop();
    insertAtBottom(s,target);
    s.push(temp);
}

void reverseStack(stack<int>&s){
    //base case
    if(s.empty()){
        return;
    }

    int target = s.top();
    s.pop();

    //reverse stack
    reverseStack(s);
    //target insert at bottom
    insertAtBottom(s,target);
}

void print(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;
}

int main()
{
     stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    print(s);
    reverseStack(s);
    print(s);

    return 0;
}