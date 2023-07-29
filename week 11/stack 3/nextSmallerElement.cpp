#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void nextSmaller(vector<int>&v){

    stack<int>s;
    s.push(-1);

    vector<int>ans(v.size(),-1);
    for(int i=v.size()-1;i>=0;i--){
        while(s.top() >= v[i]){
            s.pop();
        } 
        ans[i] = s.top();
        s.push(v[i]);
    }

    for(int i=0;i<ans.size();i++){
        cout<<v[i]<<" next smaller is : "<<ans[i]<<endl;
    }cout<<endl;
}

void prevSmaller(vector<int>&v){

     stack<int>s;
    s.push(-1);

    vector<int>ans(v.size(),-1);
    for(int i=0;i<v.size();i++){
        while(s.top() >= v[i]){
            s.pop();
        } 
        ans[i] = s.top();
        s.push(v[i]);
    }

    for(int i=0;i<ans.size();i++){
        cout<<v[i]<<" prev smaller is : "<<ans[i]<<endl;
    }cout<<endl;
}

int main() // Time - O(n)
{
    vector<int>v;
    v.push_back(10);
    v.push_back(70);
    v.push_back(30);
    v.push_back(20);
    v.push_back(60);
    v.push_back(40);
    nextSmaller(v);
    prevSmaller(v);
    
    return 0;
}