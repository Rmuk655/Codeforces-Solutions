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
        int n, k;
        long long int ans = 0, x_1 = 0, x_l = 0, y_1 = 0, y_l = 0, x_m = 0, y_m = 0;
        cin >> n >> k;
        string s, z;
        cin >> s;
        cin >> z;
        for (char c : s)
        {
            if (c == '1')
            {
                x_1++;
            }
            else
            {
                y_1++;
            }
        }
        for (char c : z)
        {
            if (c == '1')
            {
                x_l++;
            }
            else
            {
                y_l++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] != z[i])
            {
                x_m++;
            }
            else
            {
                y_m++;
            }
        }
        long long int val = pow(2, k) + 1, temp = val / 3;
        if (k % 2 == 0)
        {
            ans = (temp + 1) * (x_1 * y_1 + x_l * y_l) + temp * x_m * y_m;
        }
        else
        {
            ans = temp * (x_1 * y_1 + x_l * y_l + x_m * y_m);
        }
        cout << ans << endl;
    }
}