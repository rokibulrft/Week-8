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
        vector<long long int> a(n), b(n), c(n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        b[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            b[i] = max(a[i], b[i + 1]);
        }
        c[n - 1] = 0;
        long long int ans = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] == b[i])
            {
                c[i] = 0;
            }
            else
            {
                c[i] = c[i + 1] + 1;
                ans = max(ans, c[i]);
            }
        }
        cout << ans << endl;
    }
}