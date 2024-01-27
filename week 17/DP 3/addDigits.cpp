#include<iostream>
using namespace std;
// int sumOfDigits(int n){
//     int sum = 0;
//     while(n){
//         sum += n%10;
//         n /= 10;
//     }
//     return sum;
// }
int main(){
    // int n;
    // cin>>n;
    // int sum = sumOfDigits(n);
    // cout<<sum<<endl;
    string s;
    cin>>s;
    int i = 0,j = s.length()-1;
    while(i < j){
        if(s[i] == s[j]){
            i++;
            j--;
        }
        else{
            cout<<"Not palindrome"<<endl;
            return 0;
        }
    }
    cout<<"Is a palindrome"<<endl;
    return 0;
    
}