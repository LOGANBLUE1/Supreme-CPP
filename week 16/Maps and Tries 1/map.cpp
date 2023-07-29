#include<iostream>
#include<map>
using namespace std;
int main(){
    unordered_map<string,int>mp;
    // pair<string,int> p1 = {"Aditya",57};
    // mp.insert(p1);

    // pair<string,int> p2{"Sachin",46};
    // mp.insert(p2);

    mp["jaggu"] = 61;

    cout<<mp["jaggu"]<<" ";
    cout<<mp.at("jaggu")<<endl;

    cout<<mp.count("jaggu")<<endl;

    if(mp.find("jaggu") != mp.end()){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }

    return 0;
}