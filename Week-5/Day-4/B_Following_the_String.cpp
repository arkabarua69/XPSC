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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    map<char, int> mp;
    char c = 'a';
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            mp[c] = 0;
            cout << c;
            c++;
        }
        else
        {
            for (auto e : mp)
            {
                if (v[i] - 1 == e.second)
                {
                    cout << e.first;
                    mp[e.first]++;
                    break;
                }
            }
        }
    }
    cout << nl;
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