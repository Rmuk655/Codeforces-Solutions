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
        long long int n, a = 0, b = 0;
        cin >> n;
        long long int x = n % 12;
        if (x == 0)
        {
            if (n >= 252)
            {
                a = 252;
                b = n - 252;
            }
            else{
                a = 0;
                b = n;
            }
        }
        else if (x == 10)
        {
            if (n >= 22)
            {
                a = 22;
                b = n - 22;
            }
        }
        else
        {
            a = x;
            b = n - x;
        }
        if (a == 0 && b == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << a << " " << b << endl;
        }
    }
}