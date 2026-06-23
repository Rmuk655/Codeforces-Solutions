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
        int n;
        cin >> n;
        vector<int> ans(4 * n, 0);
        for (int i = 1; i < n; i++)
        {
            ans[i - 1] = i;
            ans[n + i - 1] = i;
            ans[2 * n + i] = i;
            ans[3 * n + i - 1] = i;
        }
        ans[n - 1] = n;
        ans[n + n - 1] = n;
        ans[2 * n] = n;
        ans[3 * n + n - 1] = n;
        for (int x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}