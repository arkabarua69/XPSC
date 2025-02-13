#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define it(_) (_).begin(), (_).end()
#define cy cout << "Yes" << endl
#define cn cout << "No" << endl
#define Speed_code               \
    ios::sync_with_stdio(false); \
    cin.tie(0);
void GunJon()
{

    string a, b;
    cin >> a >> b;
    int n = a.size();
    if (n != b.size())
    {
        cn;
        return;
    }
    for (int i = 0; i < n; ++i)
        a[i] = a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u';
    for (int i = 0; i < n; ++i)
        b[i] = b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u';
    for (int i = 0; i < n; ++i)
    {
        if (a[i] != b[i])
        {
            cn;
            return;
        }
    }
    cy;
}
int main()
{
    Speed_code;
    // int $;
    // cin >> $;
    // while ($--)
    GunJon();
}
/*Code by Gunjon*/