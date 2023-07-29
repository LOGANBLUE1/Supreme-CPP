#include<iostream>
using namespace std;

    bool valid(char ch){
        if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            return 1;
        }
        return 0;
    }
    
    char toLowerCase(char ch) {
    if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
        return ch;
    else
    {
        return ch - 'A' + 'a';
    }
}

bool checkPalindrome(string a) {
    int s = 0;
    int e = a.length()-1;

    while(s<=e) {
        if(a[s] != a[e])
        {
            return 0;       
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
    bool isPalindrome(string s) {
        
        //Remove all non-alphanumeric character
        string temp = "";
        
        for(int j=0; j<s.length(); j++) {   
            if(valid(s[j])) {
                temp.push_back(s[j]);
            }
        }
        
        //convert all uppercase letter into lowercase
        for(int j=0; j<temp.length(); j++) { 
            temp[j] = toLowerCase(temp[j]);
        }
        
        //check palindrome or not
        return checkPalindrome(temp);
    }
int main()
{  
    string check;
cout<<"Enter the string : ";
cin>>check;
cout<<isPalindrome(check)<<endl;
    return 0;
}