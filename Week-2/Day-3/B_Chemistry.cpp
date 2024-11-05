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
        int n, k;
        string s;
        cin >> n >> k >> s;

        map<char, int> mp;
        for (char c : s)
        {
            mp[c]++;
        }

        int odd = 0;
        for (auto c : mp)
        {
            if (c.second % 2 != 0)
            {
                odd++;
            }
        }

        if (odd - 1 > k)
            cn;

        else
        {
            cy;
        }
    }
}
/*Code by Gunjon*/