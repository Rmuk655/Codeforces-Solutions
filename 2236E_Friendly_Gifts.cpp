#include <bits/stdc++.h>
 
using namespace std;
 
bool feasible(vector<int> &a, int mid, int n)
{
    if (mid == 0)
    {
        return true;
    }
    vector<int> seg_min(n, -1);
    vector<int> freq(n + 1, 0);
    int no = 0;
    deque<int> mnq, mxq;
    for (int i = 0; i < n; i++)
    {
        if (++freq[a[i]] == 2)
            no++;
 
        while (!mnq.empty() && a[mnq.back()] >= a[i])
            mnq.pop_back();
        mnq.push_back(i);
 
        while (!mxq.empty() && a[mxq.back()] <= a[i])
            mxq.pop_back();
        mxq.push_back(i);
 
        if (i >= mid)
        {
            int rem = a[i - mid];
 
            if (freq[rem] == 2)
                no--;
            freq[rem]--;
 
            while (!mnq.empty() && mnq.front() <= i - mid)
                mnq.pop_front();
 
            while (!mxq.empty() && mxq.front() <= i - mid)
                mxq.pop_front();
        }
 
        if (i >= mid - 1)
        {
            int l = i - mid + 1;
 
            int mnVal = a[mnq.front()];
            int mxVal = a[mxq.front()];
 
            if (no == 0 && mxVal - mnVal + 1 == mid)
                seg_min[l] = mnVal;
        }
    }
    vector<int> seen(n + 1, 0);
    for (int j = 0; j + mid - 1 < n; j++)
    {
        if (j >= mid && seg_min[j - mid] != -1)
        {
            seen[seg_min[j - mid]] = 1;
        }
        if (seg_min[j] == -1)
            continue;
 
        int m = seg_min[j];
 
        if (m - mid >= 1 && seen[m - mid])
            return true;
        if (m + mid <= n && seen[m + mid])
            return true;
    }
    return false;
}
 
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, ans = 0, temp = 0;
        cin >> n;
        vector<int> a;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for(int j = n/2; j >= 0; j--)
        {
            if (feasible(a, j, n))
            {
                ans = j;
                break;
            }
        }
        cout << ans << endl;
    }
}