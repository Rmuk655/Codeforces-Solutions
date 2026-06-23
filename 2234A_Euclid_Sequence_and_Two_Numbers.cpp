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
        vector<int> vec;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            vec.push_back(x);
        }
        sort(vec.begin(), vec.end(), greater<int>());
        bool cond = true;
        for (int i = 2; i < n; i++)
        {
            if (vec[i] != vec[i - 2] % vec[i - 1])
            {
                cond = false;
                break;
            }
        }
        if(vec.size() < 2)
        {
            cond = false;
        }
        if (cond)
        {
            cout << vec[0] << " " << vec[1] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}