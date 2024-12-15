#include <bits/stdc++.h>
using namespace std;

int okay(int l, int r)
{
    int temp = l;
    for (int i = 30; i >= 0; i--)
    {
        int x = ((1 << i) & l) ? 1 : 0;
        int y = ((1 << i) & r) ? 1 : 0;
        if (x ^ y)
        {
            temp = (1 << i);
            temp |= temp - 1;
            break;
        }
    }
    return l | temp;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int ans = okay(max(0, n - m), n + m);
        cout << ans << endl;
    }
    return 0;
}
