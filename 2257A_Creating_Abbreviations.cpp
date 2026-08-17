#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m, ans = 0;
        cin >> n >> m;
        vector<string> w, a;
        map<char, int> mp;
        for (int j = 0; j < n; j++)
        {
            string x;
            cin >> x;
            w.push_back(x);
            mp[toupper(x[0])]++;
        }
        bool cond = false;
        for (int j = 0; j < m; j++)
        {
            string x;
            cin >> x;
            for (char c : x)
            {
                if (mp[c] == 0)
                {
                    cond = true;
                    break;
                }
            }
            a.push_back(x);
        }
        if (!cond)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO"<< endl;
        }
    }
}