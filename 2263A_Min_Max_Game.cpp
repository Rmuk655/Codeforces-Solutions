#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> a;
        int zer = 0, one = 0;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            if(x == 0){
                zer++;
            }
            else{
                one++;
            }
        }
        if(one >= zer){
            cout << "Bessie" << endl;
        }
        else{
            cout << "Elsie" << endl;
        }
    }
}