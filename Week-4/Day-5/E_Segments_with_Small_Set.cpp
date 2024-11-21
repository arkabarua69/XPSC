#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<int, int> mp;
    int l = 0, cnt = 0;
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {

        if (mp[v[i]] == 0)
        {
            cnt++;
        }
        mp[v[i]]++;

        while (cnt > k)
        {
            mp[v[l]]--;
            if (mp[v[l]] == 0)
            {
                cnt--;
            }
            l++;
        }

        ans += (i - l + 1);
    }

    cout << ans << endl;
}
/*Code by Gunjon*/