#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    string s;
    cin >> s;
    bool f[26] = {false};

    for (char c : s)
        f[c - 'a'] = true;

    char n = 'None';

    for (int i = 0; i < 26; i++)
    {
        if (!f[i])
        {
            n = 'a' + i;
            cout << n << nl;
            return 0;
        }
    }

    cout << "None" << nl;
}
/*Code by Gunjon*/