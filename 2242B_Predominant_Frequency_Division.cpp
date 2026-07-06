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
        bool cond = false, cond2 = false;
        int n, cnt_1 = 0, cnt_2 = 0, cnt_3 = 0, t_1 = 0, t_2 = 0, t_3 = 0;
        cin >> n;
        vector<int> a;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                cnt_1++;
            }
            else if (x == 2)
            {
                cnt_2++;
            }
            else if (x == 3)
            {
                cnt_3++;
            }
 
            if (cond && (cnt_1 - t_1) + (cnt_2 - t_2) >= (cnt_3 - t_3) && (cnt_1 + cnt_2 + cnt_3 < n))
            {
                cond2 = true;
            }
            else if (cnt_1 >= cnt_2 + cnt_3)
            {
                cond = true;
                t_1 = cnt_1;
                t_2 = cnt_2;
                t_3 = cnt_3;
            }
            a.push_back(x);
        }
        if (cond2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}