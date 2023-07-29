#include<iostream>
#include<queue>
using namespace std;

class info{
public:
    int value;
    int row;
    int col;

    info(int val,int r,int c): value(val),row(r),col(c) {}
};

class compare{
public:
    bool operator()(info* a,info* b){
        return a->value > b->value;
    }
};

vector<int> mergekSortedArrays(int arr[][4],int k,int n){
    priority_queue<info*,vector<info*>,compare>minHeap;
    vector<int>ans;

    //har array ka first element insert karo
    for(int i=0;i<k;i++){
        info* temp = new info(arr[i][0],i,0);
        minHeap.push(temp);
    }
    while(!minHeap.empty()){
        info* temp = minHeap.top();//chota element nikal lenge
        int topElement = temp->value;
        int topRow = temp->row;
        int topCol = temp->col;
        minHeap.pop();
    
        ans.push_back(topElement);

        if(topCol + 1 < n){
            info* newInfo = new info(arr[topRow][topCol+1],topRow,topCol+1);
            minHeap.push(newInfo);
        }
    }
}
int main()
{
    int arr[][4] = {{2,4,6,8},
                    {1,3,5,7},
                    {0,9,10,11}   };
    int k = 3;
    int n = 4;
    
    vector<int>ans = mergekSortedArrays(arr,k,n);
    for(auto it : ans){
        cout<<it<<" ";
    }cout<<endl;

    return 0;
}