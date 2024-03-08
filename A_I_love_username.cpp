#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=0;
    cin >> t;
    int n;
    int ans=0;

    int high_score,low_score;
    vector<int> v;
    int count=0;
    
    while(t--){
    
    
        cin>>n;
        v.push_back(n);
        
    }
   
    
    high_score=v[0];
    
    low_score=v[0];
    
    for(int i=0;i<v.size();i++){
        if(v[i]>high_score||v[i]<low_score){
            ans++;
            high_score=max(v[i],high_score);
            low_score=min(v[i],low_score);
        }
    }
        cout<<ans;
    
    return 0;

}