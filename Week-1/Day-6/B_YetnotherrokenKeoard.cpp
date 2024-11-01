#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        stack<int> xs, sm;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b')
            {
                s[i] = '.';
                if (sm.empty())
                    continue;
                else
                {
                    s[sm.top()] = '.';
                    sm.pop();
                }
            }
            else if (s[i] == 'B')
            {
                s[i] = '.';
                if (xs.empty())
                    continue;
                else
                {
                    s[xs.top()] = '.';
                    xs.pop();
                }
            }
            else
            {
                if (s[i] >= 'a' && s[i] <= 'z')
                {
                    sm.push(i);
                }
                else
                {
                    xs.push(i);
                }
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '.')
            {
                continue;
            }
            else
                cout << s[i];
        }
        cout << nl;
    }
}
/*Code by Gunjon*/