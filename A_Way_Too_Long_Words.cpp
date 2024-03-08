#include<bits/stdc++.h>
using namespace std;
        string s;
        vector<string> w1;
        vector<string> w2;
void avv(string &s){
    int i=0;
    
    string temp="";
    temp=s[0]+to_string(s.length()-2)+s[s.length()-1];
  
    w2.push_back(temp);
    }
int main()
{
    int t;
    cin >> t;

    while (t--) {
        cin>>s;
        w1.push_back(s);
    }
   
    for(int i=0;i<w1.size();i++){
        if(w1[i].length()<=10){
            w2.push_back(w1[i]);

        }
        else{
            avv(w1[i]);
        }
       
    }
     for(int i=0;i<w2.size();i++)
        {
            cout<<w2[i]<<endl;
        }

    
}