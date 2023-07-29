#include <iostream>
using namespace std;
int main()
{
    // int arr1[] = {2, 3, 4, 5, 6, 7, 7, 8};
    // // int arr[n];cin>>n; bad practice
    // char wer[] = {'a', 'c', 'r'};
    // int arr[] = {0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 0};
    // int numzero = 0;
    // int numone = 0;
    // for (int i = 0; i < 12; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         numzero++;
    //     }
    //     else
    //     {
    //         numone++;
    //     }
    // }
    // cout << numzero << endl
    //      << numone << endl;
    // int even[] = {2, 4, 7, 9, 3, 5};
    // int temp =INT_MIN;
    // for (int i = 0; i < 6; i++)
    // {
    //     if (even[i] > temp)
    //     {
    //         temp = even[i];
    //     }
    // }
    // cout << temp << endl;
    //reverse an array
int arr[]= {1,2,3,4,5,6,7};

int start = 0;
int end = 7-1;
while(start<end){
    swap(arr[start++],arr[end--]);
}// have to enter size everytime
for(int i=0;i<7;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

    return 0;
}