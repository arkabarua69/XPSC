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
    cin >> n;
    string s;
    cin >> s;
    int a = 0;
    for (char c : s)
    {
        if (c == '+')
            a++;
        else if (c == '-')
            a--;
        else
            assert(false);
    }
    cout << abs(a) << nl;
    return;
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