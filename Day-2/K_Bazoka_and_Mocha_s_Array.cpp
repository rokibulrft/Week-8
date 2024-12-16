#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bool ok = false;
    for (int it = 0; it < n; it++)
    {
        if (is_sorted(a.begin(), a.end()))
        {
            ok = true;
            break;
        }
        rotate(a.begin(), a.begin() + 1, a.end());
    }

    cout << (ok ? "Yes" : "No") << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}