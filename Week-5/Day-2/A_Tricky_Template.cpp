#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
void GunJon()
{
    int n;
    cin >> n;
    string a, b, c;
    cin >> a >> b >> c;
    for (int i = 0; i < n; i++)
    {
        if (c[i] != a[i] && b[i] != c[i])
        {
            cy;
            return;
        }
    }
    cn;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        GunJon();
    }
}
/*Code by Gunjon*/