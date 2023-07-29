#include<iostream>
using namespace std;
class cirQueue{
public:
    int*arr;
    int size;
    int front;
    int rear;

    cirQueue(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int data){
        //Queue full
        if( (front == 0 && rear == size-1) || (rear = front-1) ){
            cout<<"Queue is full ,cannot insert"<<endl;
            return ;
        }
        //inserting first element
        else if(front == -1){
            front = rear = 0; 
        }
        //circular nature
        else if(rear == size-1 && front != 0){
            rear = 0;
        }
        //normal case
        else{
            rear++;
        }
        arr[rear] = data;
    }

    void pop(){
        //empty check
        if( front == -1 ){
            cout<<"Queue is empty ,cannot pop"<<endl;
        }
        //single element
        else if(front == rear){
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        //circular nature
        else if(front == size-1){
           front = 0;
        }
        //normal case
        else{
            front++;
        }
    }

    int getSize(){
        if(front == -1){
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        else{
            return rear-front+1;
        }
    }

    bool isEmpty(){
        if(front == -1){
            cout<<"Queue is empty"<<endl;
            return true;
        }
        else{
            return false;
        }
    }

};
int main()
{
    cirQueue q(10);

    return 0;
}