#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int>&s,int temp){
    //base case
    if(s.size() == 0){
        s.push(temp);
           return;
    }
    if(s.top() >= temp){//if element below it is <= temp
        s.push(temp);
        return;
    }

    //recursion
    int element = s.top();

        //removing elements
        s.pop();
        //recursive call
        insertSorted(s,temp);
        //pushing back
        s.push(element);

}

void sortStack(stack<int>&s){
    //base case
    if(s.size() == 0){//can also do 1
        return;
    }

    //recursion
    int temp = s.top();

    s.pop();//recursion removing
    //making stack smaller everytime
    sortStack(s);

    insertSorted(s,temp);//putting back removed element inside in sorted manner

}

void print(stack<int> s){

    while(!s.empty()){
        cout<<s.top()<<" ";

        s.pop();
    }
    cout<<endl;

}

int main()
{
    stack<int> s;
    s.push(50);
    s.push(30);
    s.push(40);
    s.push(20);
    s.push(10);
    s.push(70);
    s.push(60);
    print(s);
    sortStack(s);
    print(s);
    return 0;
}