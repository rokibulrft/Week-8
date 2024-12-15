#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int m, a, b, c;
        cin >> m >> a >> b >> c;
        long long int ans = 0;
        ans = min(m, a) + min(m, b);
        ans += min(c, 2 * m - ans);
        cout << ans << endl;
    }
}