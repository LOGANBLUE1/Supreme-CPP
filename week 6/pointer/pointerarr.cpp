#include<iostream>
using namespace std;
int sum(int *num,int n){ //*num and num[] work same in this case cause actually pointer is passed
    cout<<sizeof(num)<<endl; //print sizee of pointer passed to this fumction from even 
        int SUM =0;
    for(int i=0;i<n;i++){
         SUM = SUM + num[i];
    }
    return SUM;
}
int main(){
 int arr[6] = {3,8,2,4,9,1};
   cout<<arr<<endl;  //address of item at 0 index
   cout<<&arr[0]<<endl;  //address of item at 0 index

   cout<<*arr<<endl;  //value at 0 index
   cout<<*arr +1<<endl;  // value +1
   cout<<*(arr +1)<<endl; //value at 1 index

   cout<<arr[4]<<" ";//value at 4 index = *(arr+4)
   cout<<4[arr]<<" ";//   same          = *(4+arr)
   cout<<*(4 + arr)<<" ";//   same          = *(4+arr)
   cout<<*(arr + 4)<<endl;//   same          = *(4+arr)

int a[20] = {1,2,3,5};
cout<<a<<" ";//address of a[0]
cout<<&a<<" ";  //     
cout<<&a[0]<<endl;//   ,,
int *p = &a[0];        
cout<<"P[0] "<<p[3]<<" ";  // a[0]

cout<<p<<" ";   //  address of a[0]
cout<<*p<<" ";  //  value at a[0]
cout<<&p<<endl;  // address of address of a[0] / address of p

char ch[6]= "abcde"; //pointrs work diffeerently on character arrays
cout<<ch<<endl;      
char* ptrs = &ch[0];
cout<<ptrs<<endl;
int even[10]={1,2,3,4,5,6,7,8,9,10};
cout<<sum(even,10)<<endl;//prints sum (calls sum function from even[0] pointer and add ten entries of array)
cout<<sum(even+5,5)<<endl;// calls function from arr[5] pointer and add 5 entries 

    return 0;
}