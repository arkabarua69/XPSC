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

    int n, a, b;
    cin >> n >> a >> b;
    set<int> st;
    for (int i = 1; i <= n; i++)
        st.insert(i);
    st.erase(a);
    st.erase(b);
    bool f = true;
    vector<int> v;
    v.push_back(a);
    for (int i = 1; i < n / 2; i++)
    {
        int u = *st.rbegin();
        (u > a) ? v.push_back(u), st.erase(u) : f = false;
    }
    v.push_back(b);
    for (int i = 1; i < n / 2; i++)
    {
        int u = *st.begin();
        (u < b) ? v.push_back(u), st.erase(u) : f = false;
    }
    if (f)
    {
        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << nl;
    }
    else
        cout << -1 << nl;
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