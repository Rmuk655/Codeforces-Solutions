#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, dig = 0;
        cin >> x;
        while (x > 0)
        {
            dig++;
            x = x / 10;
        }
        long long int y = 1;
        for (int i = 0; i < dig; i++)
        {
            y *= 10;
        }
        y++;
        cout << y << endl;
    }
}