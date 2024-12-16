#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int ans = INT_MAX;
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            int l = 0, r = n - 1, rem = 0;
            while (l <= r)
            {
                if (s[l] == s[r])
                {
                    l++, r--;
                }
                else if (s[l] == ch)
                {
                    l++, rem++;
                }
                else if (s[r] == ch)
                {
                    r--, rem++;
                }
                else
                {
                    rem = n + 1;
                    break;
                }
            }
            ans = min(ans, rem);
        }
        if (ans == n + 1)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
    return 0;
}
