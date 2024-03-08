#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int count=0;
    while(n>0){
        int temp = n%10;
        if(temp==7 || temp==4){
            count++;
        }
        n=n/10;
    }
    if(count==7||count==4) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}