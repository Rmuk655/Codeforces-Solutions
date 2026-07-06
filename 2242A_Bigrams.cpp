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
        bool cond = false;
        int k, cnt = 0;
        cin >> k;
        vector<int> c;
        for (int j = 0; j < k; j++)
        {
            int x;
            cin >> x;
            if (x >= 3)
            {
                cond = true;
            }
            else if (x == 2)
            {
                cnt++;
            }
            c.push_back(x);
        }
        if (cond || cnt >= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}