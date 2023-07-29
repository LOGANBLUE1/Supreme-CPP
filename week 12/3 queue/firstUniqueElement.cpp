#include<iostream>
#include<queue>
using namespace std;

int main()
{
    string str = "aacd";
    int freq[26] = {0};
    queue<char>q;

    string ans = "";

    for(int i=0;i<str.size();i++){
        char ch = str[i];
    // frequency
        freq[ch-'a']++;
    //q.push
        q.push(ch);

        while(!q.empty()){//look at this for loop
            if(freq[q.front()-'a'] > 1){
                q.pop();
            }
            else{
                ans.push_back(q.front());
                break;
            }
        }
        if(q.empty()){
            ans.push_back('#');
        }
    }
cout<<ans<<endl;
    return 0;
}