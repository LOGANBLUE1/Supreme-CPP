#include<iostream>
using namespace std;
void reverse(string &s,int i,int j){
    if(i >= j)  return;
    swap(s[i],s[j]);
    reverse(s,i+1,j-1);
}
int main()
{
    string s ="keshav";
    reverse(s,0,5);
    cout<<s<<endl;

    return 0;
}