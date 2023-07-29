#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int h,x,y;
        cin>>h>>x>>y;
        int count =1;
        count += ceil(float(h - y)/x);
        cout<<count<<endl;
    }
	return 0;
}