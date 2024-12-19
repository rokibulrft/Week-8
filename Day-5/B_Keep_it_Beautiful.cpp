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

        string result;
        int last_in = -1;
        bool choto_ashce = false;

        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                result.push_back('1');
                last_in = a[i];
            }
            else if (!choto_ashce && a[i] >= last_in)
            {
                result.push_back('1');
                last_in = a[i];
            }
            else if (!choto_ashce && a[i] < last_in)
            {
                if (a[i] <= a[0])
                {
                    result.push_back('1');
                    last_in = a[i];
                    choto_ashce = true;
                }
                else
                {
                    result.push_back('0');
                }
            }
            else if (choto_ashce && a[i] >= last_in && a[i] <= a[0])
            {
                result.push_back('1');
                last_in = a[i];
            }
            else
            {
                result.push_back('0');
            }
        }

        cout << result << endl;
    }
    return 0;
}
