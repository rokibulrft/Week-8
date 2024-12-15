#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        int maxcnt = 0;
        vector<int> b(n + 1);
        map<int, int> mp2;
    }
}