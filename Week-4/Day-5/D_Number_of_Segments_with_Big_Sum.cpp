#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    int n;
    ll m;
    cin >> n >> m;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll sum = 0, cnt = 0;
    int l = 0;

    for (int i = 0; i < n; i++)
    {
        sum += v[i];

        while (sum >= m)
        {

            cnt += (n - i);
            sum -= v[l];
            l++;
        }
    }

    cout << cnt << endl;
}
/*Code by Gunjon*/
