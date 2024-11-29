#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "Yes" << endl
#define cn cout << "No" << endl
void GunJon()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(k), sum(k - 1);
    for (int i = 0; i < k; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i < k; i++)
    {
        sum[i - 1] = v[i] - v[i - 1];
    }
    if (k == 1)
        cy;
    else if (!is_sorted(sum.begin(), sum.end()))
        cn;
    else if (v[0] > sum[0] * (n - k + 1))
        cn;
    else
        cy;
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