#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n), dp(n);
    set<int> st;

    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = n - 1; i >= 0; i--)
    {
        st.insert(v[i]);
        dp[i] = st.size();
    }

    while (m--)
    {
        int a;
        cin >> a;
        cout << dp[a - 1] << nl;
    }
}
/*Code by Gunjon*/