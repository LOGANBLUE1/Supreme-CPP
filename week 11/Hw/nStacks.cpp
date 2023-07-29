#include<iostream>
using namespace std;
class NStack{
    int *arr,*top,*next;
    int size;
    int n;
    int freeSpot;
public:
    NStack(int _size,int _n) : n(_n) , size(_size){
        arr = new int[size];
        top = new int[n];
        next = new int[size];

        for(int i=0;i<n;i++){
            top[i] = -1;
        }
        for(int i=0;i<size;i++){
            next[i] = i+1;
        }
        next[size-1] = -1;
    }
    // push val into mth stack
    bool push(int val,int m){
        if(freeSpot == -1) 
            return false;//stack overflow

        // 1.find index
        int index = freeSpot;

        // 2.update freespot
        freeSpot = next[index];

        // 3.push value
        arr[index] = val;

        // 4.update next
        next[index] = top[m-1];

        // 5.update top
        top[m-1] = index;
        return true;
    }

    //pop from mth stack
    int pop(int m){
        if(top[m-1] == -1)  
            return -1;//stack underflow

        int index = top[m-1];
        top[m-1] = next[index];
        int poppedElement = arr[index];
        next[index] = freeSpot;
        freeSpot = index;

        return poppedElement;
    }

    ~NStack(){
        delete[] arr;
        delete[] top;
        delete[] next;
    }
};

int main()
{
    NStack s(6,3);
    cout<<s.push(5,1)<<endl;
    return 0;
}