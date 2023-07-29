#include<iostream>
using namespace std;
int main()
{
    int arr[9];
    int(* p)[9] = &arr;
    return 0;
}