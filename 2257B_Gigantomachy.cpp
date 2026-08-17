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
        cin >> n >> m;
        vector<long long> a, b;
        for (int j = 0; j < n; j++)
        {
            long long x;
            cin >> x;
            a.push_back(x);
        }
        for (int j = 0; j < m; j++)
        {
            long long x;
            cin >> x;
            b.push_back(x);
        }
        long long A = a[0] + n - 1, B = b[0] + m - 1;
        if (A >= B)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
}