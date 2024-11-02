#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        set<char> st(s.begin(), s.end());
        string r(st.begin(), st.end());

        map<char, char> mp;
        int rl = r.size();
        for (int i = 0; i < rl; ++i)
        {
            mp[r[i]] = r[rl - 1 - i];
        }

        string s1;
        s1.reserve(s.size());
        for (char c : s)
        {
            s1 += mp[c];
        }

        cout << s1 << nl;
    }
}
/*Code by Gunjon*/