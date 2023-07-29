#include<iostream>
#include<queue>
using namespace std;

int getKthSmallest(int arr[],int n,int k){
    priority_queue<int>pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        if(arr[i] < pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
}

int getKthGreatest(int arr[],int n,int k){
    priority_queue<int ,vector<int>,greater<int> >pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }

    for(int i=k;i<n;i++){
        if(arr[i] > pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }   
    }
    return pq.top();
}

int main(){

    int arr[] = {5,6,2,9,13,63,12,99};
    int n = 8;
    int ans = getKthGreatest(arr,n,2);
    // int ans = getKthSmallest(arr,n,4);
    cout<<"ans -> "<<ans<<endl;

    return 0;
}