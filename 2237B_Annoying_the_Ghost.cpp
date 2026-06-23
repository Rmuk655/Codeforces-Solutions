#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        bool cond = true;
        vector<int> a, b, c;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            c.push_back(x);
        }
        sort(c.begin(), c.end());
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            if (c[j] > x)
            {
                cond = false;
            }
            b.push_back(x);
        }
        if (!cond)
        {
            cout << -1 << endl;
            continue;
        }
 
        vector<int> pos(n);
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (b[k] >= a[j])
                {
                    pos[j] = k;
                    break;
                }
            }
        }
 
        vector<int> perm(n, -1);
        vector<bool> visited(n, false);
 
        for (int j = 0; j < n; j++)
        {
            int best = -1;
            for (int k = 0; k < n; k++)
            {
                if (!visited[k] && pos[k] <= j)
                {
                    if (best == -1 || k < best)
                    {
                        best = k;
                    }
                }
            }
            visited[best] = true;
            perm[best] = j;
        }
 
        long long ans = 0;
 
        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (perm[j] > perm[k])
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}