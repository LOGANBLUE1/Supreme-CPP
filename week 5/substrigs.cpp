#include<iostream>
using namespace std;
void substring(string s){
    int n = s.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<s.substr(i,j-i+1)<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    string str;
    cin>>str;
    substring(str);

    return 0;
}