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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a = 0, b = 0;
        bool f = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                f = true;
            }
            else
            {
                if (f)
                    a++;
                f = false;
            }
        }
        if (f)
            a++;
        f = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                f = true;
            }
            else
            {
                if (f)
                    b++;
                f = false;
            }
        }
        if (f)
            b++;

        cout << min(a, b) << nl;
    }
}
/*Code by Gunjon*/