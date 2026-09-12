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
        vector<long long int> a;
        for (int j = 0; j < n; j++)
        {
            long long int x;
            cin >> x;
            a.push_back(x);
        }
        vector<int> diff(n + 2, 0);
        int ind = 0;
        for (int j = 1; j <= n; j++)
        {
            long long temp = a[j - 1] * j;
            if (temp <= n - 1)
            {
                diff[temp]++;
                diff[min((long long) n - 1, temp + j - 1) + 1]--;
            }
        }
        set<int> f;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            c += diff[i];
            if(c == 0) f.insert(i);
        }
        set<int> ch;
        vector<int> vec;
        for(int j = 1; j <= n; j++){
            for(long long q = 0; q < a[j - 1]; q++){
                long long l = q * j, h = min((long long) n - 1, q * j + j - 1);
                auto it = ch.lower_bound(l);
                if(it != ch.end() && *it <= h) continue;
                int slot = *f.lower_bound(l);
                vec.push_back(slot);
                ch.insert(slot);
            }
        }
        cout << vec.size() << endl;
        for (int x : vec)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}