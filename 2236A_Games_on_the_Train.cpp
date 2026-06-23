#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k = 0;
        cin >> n;
        vector<int> h;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            h.push_back(x);
        }
        sort(h.begin(), h.end());
        k = h[h.size() - 1] - h[0] + 1;
        cout << k << endl;
    }
}