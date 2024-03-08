#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int ans = 0;

   
    if (t >= 5)
    {
        ans += t / 5;
        t = t % 5;
    }
    if (t >= 4)
    {
        ans += t / 4;
        t = t % 4;
    }
    if (t >= 3)
    {
        ans += t / 3;
        t = t % 3;
    }
    if (t >= 2)
    {
        ans += t / 2;
        t = t % 2;
    }
    if (t >= 1)
    {
        ans += t;
        
    }
    cout<<ans;
    

    return 0;
}