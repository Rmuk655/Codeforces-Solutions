#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
 
long long MOD = 998244353;
 
using namespace std;
 
long long solve(string s, int st){
    int x = -1, j = 0;
    bool cond = true;
    for(int i = st; i < s.size(); i += 2, j++){
        if(s[i] == '?') continue;
        int val = s[i] - '0', req = val ^ (j % 2);
        if(x == -1) x = req;
        else if(x != req) cond = false;
    }
    if(!cond) return 0;
    return (x == -1) ? 2 : 1;
}
 
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long ans = (solve(s, 0) * solve(s, 1))% MOD;
        cout << ans << endl;
    }
}