#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, mini = INT_MAX, ans = 0;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] > a[i])
                {
                    a[j] = a[i];
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            ans += a[i];
        }
        cout << ans << endl;
    }
}