#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int score, team = 0;
    int n, k;
    cin >> n >> k;
    if (k <= n)
    {
        while (n--)
        {
            cin >> score;
            v.push_back(score);
        }
        int cmp=v[k-1];
        sort(v.begin(), v.end(), greater<int>());
        for (int i=0;i<v.size();i++)
        {   if (v[i] == 0){
                continue;
        }
            else if(v[i] >= cmp)
            {   
                team++;
            }
        }

    }
    cout << team;
}