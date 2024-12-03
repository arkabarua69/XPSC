#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
void GunJon()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    vector<int> a;
    for (auto &e : mp)
    {
        if (e.second >= k)
            a.push_back(e.first);
    }
    if (a.empty())
    {
        cout << "-1" << nl;
        return;
    }
    int mxL = a[0], mxR = a[0], l = a[0], r = a[0];
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] == r + 1)
        {
            r = a[i];
            if (r - l > mxR - mxL)
            {
                mxL = l;
                mxR = r;
            }
        }
        else
        {
            l = a[i];
            r = a[i];
        }
    }
    cout << mxL << " " << mxR << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        GunJon();
    }
}
/*Code by Gunjon*/