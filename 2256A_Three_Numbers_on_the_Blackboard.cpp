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
        int a, b, c, ans = 0;
        cin >> a >> b >> c;
        vector<int> vec;
        vec.push_back(a);
        vec.push_back(b);
        vec.push_back(c);
        sort(vec.begin(), vec.end());
        int maxi = vec[2], mini = vec[0];
        ans = maxi - mini;
        if(ans != 0){
            ans = min(vec[0] + vec[1], vec[2]) - vec[0];
        }
        cout << ans << endl;
    }
}