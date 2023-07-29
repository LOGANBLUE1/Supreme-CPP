#include<iostream>
#include<vector>
using namespace std;
bool cmpr(int a,int b){
    return a > b;
}
int main()
{ 
    vector<int > v;
    v.push_back(5);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(4);
  sort(v.begin(),v.end(),cmpr);
  for(int i:v){
    cout<<i<<" ";
  }
  cout<<endl;

    return 0;
}