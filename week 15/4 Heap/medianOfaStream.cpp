#include<iostream>
#include<queue>
using namespace std;

    int signum(int a,int b){
        if(a == b)
            return 0;
        else if(a < b)
            return -1;
        else
            return 1;
    }
void findMedian(double &median,priority_queue<int>&maxHeap,
priority_queue<int,vector<int>,greater<int> >&minHeap,int element){
    switch( signum(maxHeap.size() ,minHeap.size()) ){
        case 0:     if(element > median){
                        minHeap.push(element);
                        median = minHeap.top();
                    }
                    else{
                        maxHeap.push(element);
                        median = maxHeap.top();
                    }
            break;
        case -1:        if(element > median){
                            int top = minHeap.top();    minHeap.pop();
                            maxHeap.push(top);
                            minHeap.push(element);
                            median = (minHeap.top() + maxHeap.top())/2.0;
                        }
                        else{
                            maxHeap.push(element);
                            median = (minHeap.top() + maxHeap.top())/2.0;
                        }  
            break;
        case 1:     if(element > median){
                        minHeap.push(element);
                        median = (minHeap.top() + maxHeap.top())/2.0;
                    }
                    else{
                        int top = maxHeap.top();    maxHeap.pop();
                        minHeap.push(top);
                        maxHeap.push(element);
                        median = (minHeap.top() + maxHeap.top())/2.0;
                    }
            break;
    }
    // if(minHeap.size() == maxHeap.size()){
    //     if(element > median){
    //         minHeap.push(element);
    //         median = minHeap.top();
    //     }
    //     else{
    //         maxHeap.push(element);
    //         median = maxHeap.top();
    //     }
    // }
    // else if(maxHeap.size() > minHeap.size()){
    //     if(element > median){
    //         minHeap.push(element);
    //         median = (minHeap.top() + maxHeap.top())/2;
    //     }
    //     else{
    //         int top = maxHeap.top();    maxHeap.pop();
    //         minHeap.push(top);
    //         maxHeap.push(element);
    //         median = (minHeap.top() + maxHeap.top())/2;
    //     }
    // }
    // else{//maxHeap.size() < minHeap.size()
    //     if(element > median){
    //         int top = minHeap.top();    minHeap.pop();
    //         maxHeap.push(top);
    //         minHeap.push(element);
    //         median = (minHeap.top() + maxHeap.top())/2;
    //     }
    //     else{
    //         maxHeap.push(element);
    //         median = (minHeap.top() + maxHeap.top())/2;
    //     }
    // }
}

int main(){
    int arr[] = {5,15,1,3,2,8,7,9,10,6,11,4};
    double median = 0;
    int n = 12;
    priority_queue<int>maxHeap;
    priority_queue<int,vector<int>,greater<int> >minHeap;
    for(int i=0;i<n;i++){
        int element = arr[i];
        findMedian(median,maxHeap,minHeap,element);
        cout<<"-> "<<median<<endl;
    }

    return 0;
}