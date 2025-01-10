#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "Yes" << endl
#define cn cout << "No" << endl
void GunJon()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0;
    while (i < n - 2)
    {
        if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
        {
            cout << 2 << endl;
            return;
        }
        i++;
    }
    int cnt = count(s.begin(), s.end(), '.');
    cout << cnt << endl;
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