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
        vector<int> a, s, temp, temp1;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        s = a;
        sort(s.begin(), s.end());
        for (int j = 0; j < n; j++)
        {
            if (s[j] != a[j])
            {
                temp.push_back(a[j]);
            }
        }
        temp1 = temp;
        reverse(temp1.begin(), temp1.end());
        sort(temp.begin(), temp.end());
        if (temp1 == temp)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}