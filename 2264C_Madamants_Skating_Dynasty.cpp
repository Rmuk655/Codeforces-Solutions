#include <bits/stdc++.h>
 
using namespace std;
 
long long int MOD = 998244353;
long long fc[200005], inv[200005];
 
int main()
{
    int mx = 200005;
    fc[0] = 1LL;
    for (int i = 1; i < 200005; i++)
    {
        fc[i] = (fc[i - 1] * i) % MOD;
    }
    inv[1] = 1LL;
    for (int i = 2; i < 200005; i++)
    {
        inv[i] = (MOD - (MOD / i) * inv[MOD % i] % MOD) % MOD;
    }
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<long long int> a, temp, s(n, 0);
        int zer = 0, one = 0;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        temp = a;
        sort(temp.begin(), temp.end());
        bool d = false;
        for (int j = 1; j < n; j++)
        {
            if(temp[j] == temp[j - 1]){
                d = true;
                break;
            }
        }
        if(d){
            cout << "-1" << endl;
            continue;
        }
        sort(a.begin(), a.end());
        if(n == 1){
            cout << "0" << endl;
            continue;
        }
        for (int j = n - 2; j >= 0; j--)
        {
            s[j] = s[j + 1] + a[j + 1];
        }
        long long t = fc[n - 1], ans = 0;
        for (int j = 0; j <= n - 2; j++)
        {
            long long sm = (s[j] - (n - 1 - j) * a[j]) % MOD;
            if(sm < 0){
                sm += MOD;
            }
            ans = (ans + ((t * inv[n - 1 - j]) % MOD * sm) % MOD) % MOD;
        }
        cout << ans << endl;
    }
}