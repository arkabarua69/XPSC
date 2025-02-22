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

    map<int, int> mp;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    if (mp.size() == 1)
    {
        cn;
        return;
    }
    cy;
    int x = -1, y = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[0])
        {
            cout << 1 << " " << i + 1 << nl;
            x = i;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[0])
            cout << x + 1 << " " << i + 1 << nl;
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