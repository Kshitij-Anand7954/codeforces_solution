#include<bits/stdc++.h>
using namespace std;

int main()
{
    string u_name;
    cin>>u_name;
    map<char,int> mpp;
    for(auto i:u_name){
        mpp[i]++;
    }
    if(mpp.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;

    }
    else{
        cout<<"IGNORE HIM!"<<endl;

    }
    
}