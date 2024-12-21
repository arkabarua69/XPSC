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
const ll N = 106 + 10;
const int M = 1e9 + 7;
void GunJon()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll cnt = 0, one = 0, zero = 0, a = -1, b = n;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
            one++, b = i;
        else
        {
            if (a == -1)
                a = i;
            cnt += one;
            zero++;
        }
    }
    ll one_2 = 0, zero_2 = 0;
    for (int i = 0; i < a; i++)
    {
        if (v[i] == 1)
            one_2++;
    }
    for (int i = n - 1; i > b; i--)
    {
        if (v[i] == 0)
            zero_2++;
    }
    cout << max({cnt, cnt - one_2 + (zero - 1),
                 cnt - zero_2 + (one - 1)})
         << nl;
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