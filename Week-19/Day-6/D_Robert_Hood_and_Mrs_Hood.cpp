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
    ll n, d, k;
    cin >> n >> d >> k;
    vector<pair<ll, ll>> v(k);
    for (int i = 0; i < k; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(it(v));
    multiset<ll> st;
    ll mx = 0, mi = LLONG_MAX;
    ll max = 0, min = 0;
    int j = 0;
    for (int i = 1; i <= n; ++i)
    {
        while (j < k && v[j].first <= i)
        {
            st.insert(v[j].second);
            ++j;
        }
        while (!st.empty() && *st.begin() <= i - d)
        {
            st.erase(st.begin());
        }
        if (i >= d)
        {
            ll cnt = st.size();
            if (cnt > mx)
            {
                mx = cnt;
                max = i - d + 1;
            }
            if (cnt < mi)
            {
                mi = cnt;
                min = i - d + 1;
            }
        }
    }
    cout << max << " " << min << nl;
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
