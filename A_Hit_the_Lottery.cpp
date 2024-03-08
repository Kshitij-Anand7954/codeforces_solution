#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int ans = 0;

   
    if (t >= 100)
    {
        ans += t / 100;
        t = t % 100;
    }
    if (t >= 20)
    {
        ans += t / 20;
        t = t % 20;
    }
    if (t >= 10)
    {
        ans += t / 10;
        t = t % 10;
    }
    if (t >= 5)
    {
        ans += t / 5;
        t = t % 5;
    }
    if (t >= 1)
    {
        ans += t;
        
    }
    cout<<ans;
    

    return 0;
}