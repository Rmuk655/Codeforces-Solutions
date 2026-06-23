#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
 
using namespace std;
 
long long int sum(vector<long long int> temp){
    long long int ans = 0;
    for(long long int x : temp){
        ans += x;
    }
    return ans;
}
 
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<long long int> h, ans;
        for (int j = 0; j < n; j++)
        {
            long long int x;
            cin >> x;
            h.push_back(x);
        }
        for(int i = 0; i < n; i++){
            long long total = 0, max_cw = 0, max_acw = 0;
            vector<long long> cw(n, 0), acw(n, 0);
            for (int j = 1; j < n; j++) {
                int k = (i + j) % n;
                int edge = (i + j - 1) % n;
                cw[k] = max(cw[(i + j - 1 + n) % n], h[edge]);
            }
            for (int j = 1; j < n; j++) {
                int k = (i - j + n) % n;
                int edge = (i - j + n) % n;
                acw[k] = max(acw[(i - j + 1 + n) % n], h[edge]);
            }
            for (int j = 0; j < n; j++) {
                if (j == i) continue;
                total += min(cw[j], acw[j]);
            }
            ans.push_back(total);
        }
        for(long long int x : ans){
            cout << x << " ";
        }
        cout << endl;
    }
}