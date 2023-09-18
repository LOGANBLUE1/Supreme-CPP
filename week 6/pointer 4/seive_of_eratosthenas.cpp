#include<iostream>
#include<vector>
using namespace std;
vector<bool> seive(int n){
    vector<bool>v(n+1,true);
    v[0] = false, v[1] = false;

    for(int i=2;i<=n;i++){
        if(v[i] == true){
            int j = i+i;
            while(j <= n){
                v[j] = false;
                j += i;
            }
        }
    }
    return v;
}
int main(){
    int n = 34;
    
    vector<bool> v = seive(n);
    int count = 0;
    for(auto it:v)
        if(it)
            count++;
    cout<<"Count: "<<count<<endl;

    return 0;
}