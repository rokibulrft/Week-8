#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n), b(q);
        int maxVal = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            maxVal = max(maxVal, a[i]);
        }
        for (int i = 0; i < q; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < q; j++)
            {
                if ((a[i] % (1 << b[j])) == 0)
                {
                    a[i] += (1 << (b[j] - 1));
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}