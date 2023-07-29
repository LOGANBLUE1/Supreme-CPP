#include<iostream>
using namespace std;
class Queue{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        this->size = size;
        arr = new int[size];
        front  = 0;
        rear = 0;
    }

    void push(int data){
        if(rear == size){
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    void pop(){
        if(front == rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            arr[front] = -1;
            front++;
            if(front == rear){
                front = 0;
                rear = 0;
            }
        }
    }

    int getSize(){
        if(front == rear){
           cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            return rear-front;
        }
    }

    int getRear(){
        if(front == rear){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }

    int getfront(){
        if(front == rear){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }

    bool isEmpty(){
        if(front == rear){
            return true;
        }
        else{
            return false;
        }
    }

};
int main()
{
    Queue q = Queue(10);//   Queue q(10);
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(55);

    q.pop();
    cout<<q.getSize()<<endl;
    cout<<q.getfront()<<endl;

    cout<<q.isEmpty()<<endl;
    
    return 0;
}