#include<iostream>
using namespace std;
void printStr(string& str,int i){
    if(i >= str.length()){
        cout<<str<<" ";
        return;
    }
    //swapping
    for(int j=i;j<str.length();j++){
        swap(str[i],str[j]);
    //rec call
        printStr(str,i+1);
    //backtrack
     swap(str[i],str[j]);
    }
}
int main()
{
    string str = "abc";
    int i=0;
    printStr(str,i);
    cout<<endl;
    return 0;
}