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
        int m = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m = max(m, a[i]);
        }
        long long int ans = 0;
        for (int j = 29; j >= 0; j--)
        {
            long long int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] >= (1 << j) && a[i] < (1 << (j + 1)))
                {
                    cnt++;
                }
            }
            ans += cnt * (cnt - 1) / 2;
        }
        cout << ans << '\n';
    }
}