#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n;
        vector<int> p(n + 1), ans;
        vector<bool> a(n + 1, false);
        for (int j = 2; j <= n; j++)
        {
            int x;
            cin >> x;
            p[j] = x;
        }
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            a[x] = true;
        }
 
        vector<vector<int>> pend(n + 1);
        vector<char> cnt(n + 1, 0);
 
        for (int v = n; v >= 1; v--)
        {
            if (a[v])
            {
                for (int x : pend[v])
                {
                    ans.push_back(x);
                }
                cnt[v] = 1;
            }
            else if (pend[v].size() != 0)
            {
                for (int i = 1; i < pend[v].size(); i++)
                {
                    ans.push_back(pend[v][i]);
                }
                cnt[v] = 1;
            }
            else
            {
                cnt[v] = 0;
            }
            if (v != 1 && cnt[v])
            {
                pend[p[v]].push_back(v);
            }
        }
 
        cout << ans.size() << " ";
        for (int x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}