#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl
#define it(_) (_).begin(), (_).end()
#define cy cout << "YES" << nl
#define cn cout << "NO" << nl
#define Speed_code               \
    ios::sync_with_stdio(false); \
    cin.tie(0);

const int N = 1000000007;
vector<ll> v(1001, 1);

void GunJon()
{
    int n;
    cin >> n;
    cout << v[n] << nl;
}

int main()
{
    Speed_code;
    int $;
    for (int i = 2; i <= 1000; i++)
    {
        v[i] = (v[i - 1] * i) % N;
    }
    cin >> $;
    while ($--)
    {
        GunJon();
    }
    return 0;
}
/*Code by Gunjon*/
