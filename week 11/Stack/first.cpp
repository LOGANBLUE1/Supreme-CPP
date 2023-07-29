#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(int size){
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    void push(int data){
        // space not available
        if(top >= size-1){
            cout<<"stack is full"<<endl;
        }
        else{ 
            top++;
            arr[top] = data;
        }
    }
    void pop(){
        if(top == -1){
            cout<<"stack is empty ,cant delete element"<<endl;
        }
        else{
            arr[top] =0;
            top--;
        }
    }
    int getTop(){
        if(top == -1){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }
    int getSize(){
        if(top == -1){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        else{
            return top+1;
        }
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        return false;
    }
};
int main()
{
    Stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.isEmpty()){
        cout<<s.getTop()<<" ";
        s.pop();
    }cout<<endl;

    return 0;
}