#include<iostream>
#include<vector>
using namespace std;
void printarr(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    cout<<endl;
}
void multiply(vector<int>&arr,int n){
    int carry = 0;
    for(int i=0;i<arr.size();i++){
        int prod = arr[i]*n + carry;
        int digit = prod%10;
        carry = prod/10;
        arr[i] = digit;
    }
    while(carry > 0) {   // most important for all the digits
      arr.push_back(carry%10);
      carry /= 10;
    }
}
void factorial(int n){
    vector<int>arr;
    arr.push_back(1);
    for(int i=2;i<=n;i++){
        multiply(arr,i);
    }

    reverse(arr.begin(),arr.end());
    cout<<n<<"! = ";
    printarr(arr);
}
int main(){
    int n;
    cin>>n;
    factorial(n);
}
// ChatGPT method
// #include <iostream>
// #include <vector>

// using namespace std;

// void multiply(vector<int>& result, int n) {
//     int carry = 0;

//     for (int i = 0; i < result.size(); i++) {
//         int product = result[i] * n + carry;
//         result[i] = product % 10;
//         carry = product / 10;
//     }

//     while (carry > 0) {
//         result.push_back(carry % 10);
//         carry /= 10;
//     }
// }

// void factorial(int n) {
//     vector<int> result;
//     result.push_back(1);

//     for (int i = 2; i <= n; i++) {
//         multiply(result, i);
//     }

//     cout << n << "! = ";

//     for (int i = result.size() - 1; i >= 0; i--) {
//         cout << result[i];
//     }

//     cout << endl;
// }

// int main() {
//     int n;
//     cin>>n;
//     factorial(n);

//     return 0;
// }