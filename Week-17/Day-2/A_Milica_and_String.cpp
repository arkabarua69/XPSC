#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define it(_) (_).begin(), (_).end()
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define Speed_code               \
    ios::sync_with_stdio(false); \
    cin.tie(0);
void GunJon()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> v(n + 1);
    for (int i = 0; i < n; ++i)
    {
        v[i + 1] = v[i] + (s[i] == 'B');
    }
    if (v[n] == k)
    {
        cout << "0" << nl;
        return;
    }
    cout << "1" << nl;
    if (v[n] > k)
    {
        for (int i = 0; i <= n; ++i)
        {
            if (v[n] - v[i] == k)
            {
                cout << i << " " << 'A' << nl;
                return;
            }
        }
    }
    else
    {
        for (int i = 0; i <= n; ++i)
        {
            if (v[n] - v[i] + i == k)
            {
                cout << i << " " << 'B' << nl;
                return;
            }
        }
    }
}
int main()
{
    Speed_code;
    int $;
    cin >> $;
    while ($--)
        GunJon();
}
/*Code by Gunjon*/