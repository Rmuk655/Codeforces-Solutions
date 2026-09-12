#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        if (n > k || k > 2 * n - 1)
        {
            cout << -1 << endl;
            continue;
        }
        vector<vector<int>> ans(n, vector<int>(n, 0));
        for (int j = 0; j <= k - n; j++)
        {
            ans[0][j] = j + 1;
        }
        int c1 = k - n + 2;
        for (int j = 0; j < n; j++)
        {
            if (c1 > k)
                break;
            if (ans[j][j] != 0)
                continue;
            ans[j][j] = c1;
            c1++;
        }
        int c = k + 1;
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (ans[j][k] != 0)
                    continue;
                ans[j][k] = c;
                c++;
            }
        }
        for (vector<int> vec : ans)
        {
            for (int x : vec)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
}