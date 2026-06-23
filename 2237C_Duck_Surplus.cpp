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
        vector<long long int> a, vec;
        for (int j = 0; j < n; j++)
        {
            long long int x;
            cin >> x;
            a.push_back(x);
        }
 
        for (int j = 0; j < n; j++)
        {
            long long int cur = a[j];
            while (!vec.empty() && cur < vec.back())
            {
                cur += vec.back();
                vec.pop_back();
            }
            vec.push_back(cur);
        }
 
        long long ans = 0;
 
        for (auto v: vec)
        {
            ans = max(ans, v);
        }
 
        cout << ans << endl;
    }
}