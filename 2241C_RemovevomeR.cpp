#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        string s;
        cin >> s;
        char prev = s[0];
        string t = "";
        t += s[0];
        for (int i = 1; i < n; i++)
        {
            if (s[i] != prev)
            {
                t += s[i];
            }
            prev = s[i];
        }
        if (t.length() > 2)
        {
            ans = 1;
        }
        else
        {
            ans = t.length();
        }
        cout << ans << endl;
    }
}