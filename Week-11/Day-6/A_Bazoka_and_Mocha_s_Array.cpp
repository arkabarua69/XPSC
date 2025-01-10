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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> sV = v;
    sort(sV.begin(), sV.end());
    v.insert(v.end(), v.begin(), v.begin() + n);
    bool f = false;
    for (int i = 0; i < n; i++)
    {
        if (vector<int>(v.begin() + i, v.begin() + i + n) == sV)
        {
            f = true;
            break;
        }
    }
    (f) ? cy : cn;
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