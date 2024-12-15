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
    int n;
    string s;
    cin >> n >> s;
    int zero = 0, one = 0;
    for (int i = 0; i < n; i++)
        (s[i] == '1') ? one++ : zero++;
    cout << ((min(zero, one) % 2 == 0) ? "Ramos" : "Zlatan") << nl;
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