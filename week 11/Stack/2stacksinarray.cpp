#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int data){
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

void push1(int data){
    if(top2-top1 == 1){
        //space not available
        cout<<"Overflow"<<endl;
    }
    else{
        top1++;
        arr[top1] = data;
    }
}

void pop1() {
    if(top1 == -1){
        //stack not empty
        cout<<"Under flow"<<endl;
    }
    else{
        top1--;
    }
}

void push2(int data) {
    if(top2-top1 == 1){
        //space not available
        cout<<"Overflow"<<endl;
    }
    else{
        top2--;
        arr[top2] = data;
    }
}

void pop2() {
     if(top2 == size){
        cout<<"Under flow"<<endl;
    }
    else{
        top2++;
    }
}

};
int main()
{
    Stack s(10);
    s.push1(10);
    s.push2(11);
    
    return 0;
}