#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, b;
        cin >> s;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == 'p')
            {
                b.push_back('q');
            }
            else if (s[i] == 'q')
            {
                b.push_back('p');
            }
            else
            {
                b.push_back('w');
            }
        }
        cout << b << endl;
    }
}