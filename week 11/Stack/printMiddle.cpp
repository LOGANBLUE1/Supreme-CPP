#include<iostream>
#include<stack>
using namespace std;
void printMidddle(stack<int>&s,int &totalSize){
    if(s.size() == (totalSize+1)/2){
        cout<<"Middle element is: "<<s.top()<<endl;
        return;
    }
    int temp = s.top();
    s.pop();
    //recursive call
    printMidddle(s,totalSize);
    //baacktrack
    s.push(temp);
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);

    int totalSize  = s.size();
    printMidddle(s,totalSize);
    return 0;
}