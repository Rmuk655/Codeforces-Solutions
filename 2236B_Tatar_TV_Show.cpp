#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k, ans = 0, c_0 = 0, c_1 = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> count(k, 0);
        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];
            if (c == '1')
            {
                count[i % k]++;
            }
        }
        bool cond = true;
        for(int x : count){
            if(x % 2 == 1){
                cond = false;
                break;
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