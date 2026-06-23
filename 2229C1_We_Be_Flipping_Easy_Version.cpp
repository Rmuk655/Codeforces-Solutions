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
        int n, count = 0;
        cin >> n;
        vector<int> vec, ans;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            vec.push_back(x);
        }
        int last_pos = -1;
        for(int j = vec.size() - 1; j >= 0; j--){
            int x = vec[j];
            if(x > 0){
                last_pos = j;
                ans.push_back(j + 1);
                count = 1;
                break;
            }
        }
        if(last_pos == -1){
            count = 0;
        }
        else{
            bool cond = true;
            for(int j = last_pos - 1; j >= 0; j--){
                int x = vec[j];
                if(cond && x < 0){
                    ans.push_back(j + 1);
                    count++;
                    cond = false;
                }
                else if(!cond && x > 0){
                    ans.push_back(j + 1);
                    count++;
                    cond = true;
                }
            }
        }
        cout << count << endl;
        for(int x : ans){
            cout << x << " ";
        }
        cout << endl;
    }
}