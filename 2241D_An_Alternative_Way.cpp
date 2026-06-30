#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        vector<int> a, b, c;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
            c.push_back(x - a[i]);
        }
        long long A = 0, B = 0;
        bool cond = true;
        for (int i = 1; i <= n; i++)
        {
            int sign = -1;
            if (i % 2 == 0)
            {
                sign = 1;
            }
            long long d = sign * (c[i - 1]);
            if (sign == 1)
            {
                long long temp = B + d;
                if (temp < 0)
                {
                    cond = false;
                    break;
                }
                A = temp;
            }
            else
            {
                long long temp = A - d;
                if (temp < 0)
                {
                    cond = false;
                    break;
                }
                B = temp;
            }
        }
        if (cond)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}