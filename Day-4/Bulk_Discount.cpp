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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long int ans = 0;
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            ans += max(0, a[i] - i);
        }
        cout << ans << "\n";
    }
}