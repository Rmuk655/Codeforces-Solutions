#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        priority_queue<int, vector<int>> pq;
        long long int sum = 0, ans = LLONG_MIN;
        for(int j = 0; j < n; j++){
            if((int)pq.size() == m - 1){
                ans = max(ans, (long long) m * (long long) a[j] - sum);
            }
            pq.push(a[j]);
            sum += a[j];
            if((int) pq.size() > m - 1){
                sum -= pq.top();
                pq.pop();
            }
        }
        cout << ans << endl;
    }
}