#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int n, k, ans = 0, cost = 1;
        cin >> n >> k;
        
        while (cost <= n)
        {
            long long int take = min(k, n / cost);
            ans += take;
            n -= take * cost;
            cost <<= 1;
        }
 
        cout << ans << '\n';
    }
}