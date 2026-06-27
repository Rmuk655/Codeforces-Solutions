#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int n, m, r, c, ans = 1, base = 2, mod = 998244353LL;
        cin >> n >> m >> r >> c;
        long long int e = (r - 1) * m + (c - 1) * n - (r - 1) * (c - 1);
        while (e > 0)
        {
            if (e & 1)
            {
                ans = (ans * base) % mod;
            }
            base = (base * base) % mod;
            e >>= 1;
        }
        cout << ans << endl;
    }
}