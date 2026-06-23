#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, x;
        cin >> a >> b >> x;
        int maxi = max(a, b), mini = min(a, b),  ans = maxi - mini, no_ops = 0;
        while (maxi != mini)
        {
            ans = min(ans, no_ops + abs(maxi - mini));
            if(maxi > mini){
                maxi /= x;
            }
            else{
                mini /= x;
            }
            no_ops++;
        }
        ans = min(ans, no_ops);
        cout << ans << endl;
    }
}