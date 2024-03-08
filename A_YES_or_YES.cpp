#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        string check,cmp="";
        cin>>check;
        for(int i=0;i<3;i++){
            cmp+=toupper(check[i]);
           

        }
        if(cmp=="YES"){
            cout<<"YES"<<endl;

        }
        else cout<<"NO"<<endl;





    }
        return 0;
}