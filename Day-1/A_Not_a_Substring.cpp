#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Srt(G) G.begin(), G.end()
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
void GunJon()
{
    string s;
    cin >> s;
    int n = s.size();
    string a = "", b = "", x = "", y = "";
    for (int i = 0; i < n; i++)
    {
        x += '(';
        y += ')';
        b += "()";
    }
    a = x + y;
    bool f = true, t = true;
    for (int i = 0; i <= n; i++)
    {
        if (a.substr(i, n) == s)
            f = false;
        if (b.substr(i, n) == s)
            t = false;
    }
    if (f)
    {
        cy;
        cout << a << nl;
    }
    else if (t)
    {
        cy;
        cout << b << nl;
    }
    else
        cn;
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