#include<iostream>
using namespace std;
class Heap{
public:
    int *arr;
    int size;

    Heap(){
        arr = new int[101];
        size = 0;
    }

    Heap(int capacity){
        arr = new int[capacity];
        size = 0;
    }


    void insert(int value){
        //insert value at the end
        size = size + 1;
        int index = size;
        arr[index] = value;

        // place it at the correct position
        while(index > 1){
            int parentIndex = index/2;

            if(arr[index] > arr[parentIndex]){
                swap(arr[index],arr[parentIndex]);
                index = parentIndex;//renaming the index
            }
            else{
                break;
            }
        }
    }

    int deletenNode(){
        // replace root node value with last node value
        arr[1] = arr[size];
        size--;

        //place root data at right position
        int index = 1;
        while(index <= size){
            int left = 2*index;
            int right = 2*index + 1;

            int largest = index;

            if(left <= size && arr[left] > arr[largest])
                largest = left;
            
            if(right <= size && arr[right] > arr[largest])
                largest = right;
            

            if(largest == index)
                break;
            else{
                swap(arr[index],arr[largest]);
                index = largest;
            }
        }
        return arr[index];
    }
};
int main()
{
    Heap h;
    h.arr[0] = -1;
    h.arr[1] = 100;
    h.arr[2] = 50;
    h.arr[3] = 60;
    h.arr[4] = 40;
    h.arr[5] = 45;
    h.size = 5;

    cout << "printing the heap" <<endl;
    for(int i=0;i<=h.size;i++){
        cout<<h.arr[i]<< " ";
    }cout<<endl;

    h.insert(10);//
    h.deletenNode();//delets max
    cout << "printing the heap" <<endl;
    for(int i=0;i<=h.size;i++){
        cout<<h.arr[i]<< " ";
    }cout<<endl;
    return 0;
}