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
        string s;
        cin >> s;
        int ones = 0, zeros = 0, i = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                ones++;
            }
            else
            {
                zeros++;
            }
        }
        bool turn = true;
        while (ones != 0 && zeros != 0)
        {
            ones--;
            zeros--;
            i++;
            if (i % 2 == 0)
            {
                turn = true;
            }
            else
            {
                turn = false;
            }
        }
        if (turn)
        {
            cout << "Ramos" << endl;
        }
        else
        {
            cout << "Zlatan" << endl;
        }
    }
}