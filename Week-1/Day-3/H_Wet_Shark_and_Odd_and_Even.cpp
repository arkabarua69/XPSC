#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    ll sum = 0, mi = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        if (v[i] % 2 == 1)
        {
            mi = min(mi, v[i]);
        } 
    }
    if (sum % 2 == 0)
    {
        cout << sum << nl;
    }
    else
    {
        cout << sum - mi << nl;
    }
}
/*Code by Gunjon*/