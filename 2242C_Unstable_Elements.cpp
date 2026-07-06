#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k, ans = 0, mx = 0;
        cin >> n >> k;
        vector<int> a;
        map<int, int> mp, mp2;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            mp[x]++;
        }
        for (auto &x : mp)
        {
            if (x.second > 0)
            {
                mp2[x.second]++;
                mx = max(mx, x.second);
            }
        }
        int temp = mp.size(), sum = n;
 
        for (int j = 0; temp > 0; j++)
        {
            if (((j + 1 > mx) || (mp2[j + 1] > 0)) && k >= sum && (k - sum) % temp == 0)
            {
                ans++;
            }
 
            sum -= temp;
            if (j + 1 <= mx)
            {
                temp -= mp2[j + 1];
            }
        }
        cout << ans << endl;
    }
}