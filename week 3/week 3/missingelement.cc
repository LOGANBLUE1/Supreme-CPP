#include<iostream>
using namespace std;
// method 1  time - O(n) space O(1)
void findMissing(int* a,int n){ //eliminating indexes 
    for(int i=0;i<n;i++){
        int index = abs(a[i]);
        if(a[index -1] > 0){
            a[index-1 ] *= -1;
        }
    }
    for(int i=0;i<n;i++){
            if(a[i]>0)   
            cout<<i+1<<" ";
        }
        cout<<endl;
}
void Find(int* a,int n){// putting elements on their index
    int i=0;
    while(i<n){
        int index = a[i] - 1; //index where the element should be
        if(a[i] != a[index])    swap(a[i],a[index]);
        else ++i;
    }
    for(int i=0;i<n;i++){
        if(a[i] != i+1)  cout<<i+1<<" ";
    }cout<<endl;
}
int main()
{   int n;
    int arr[] = {1,4,3,5,3};
    n = sizeof(arr)/sizeof(int);
    findMissing(arr,n);
    //Find(arr,n);

    return 0;
}