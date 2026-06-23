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
        int n, x, y, z, ans = 0;
        cin >> n >> x >> y >> z;
        int maxim = n % (x + y) == 0 ? n / (x + y) : n / (x + y) + 1;
        int nikita = (n - x * z) % (x + 10 * y) == 0 ? (n - x * z) /(x + 10 * y) : (n - x * z) / (x + 10 * y) + 1;
        if(n <= x * z)
        {
            int temp = n % x == 0 ? n / x : n / x + 1;
            ans = min(maxim, temp);
        }
        else{
            ans = min(maxim, nikita + z);
        }
        cout << ans << endl;
    }   
}