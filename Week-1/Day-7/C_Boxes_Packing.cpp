#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    map<int, int> cnt;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        cnt[v[i]]++;
    }

    int mx = 0;
    auto c = cnt.begin();
    while (c != cnt.end())
    {
        mx = max(mx, c->second);
        c++;
    }

    cout << mx << endl;
    return 0;
}
/*Code by Gunjon*/
