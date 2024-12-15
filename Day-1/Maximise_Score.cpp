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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int result = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            int score;
            if (i == 0)
            {
                score = abs(v[i] - v[i + 1]);
            }
            else if (i == n - 1)
            {
                score = abs(v[i] - v[i - 1]);
            }
            else
            {
                score = max(abs(v[i] - v[i - 1]), abs(v[i] - v[i + 1]));
            }

            result = min(result, score);
        }

        cout << result << endl;
    }
    return 0;
}
