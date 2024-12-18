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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        bool possible = true;
        int dif = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                possible = false;
                break;
            }
            if (b[i] != 0)
            {
                dif = min(dif, a[i] - b[i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] - b[i] > dif)
            {
                possible = false;
                break;
            }
        }
        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }
}