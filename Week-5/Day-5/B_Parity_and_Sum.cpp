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
    ll arr[n],
        cntOb = 0,
        cntEv = 0,
        mxOd = -1,
        mxEv = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 1)
        {
            cntOb++;
            mxOd = max(mxOd, arr[i]);
        }
        else
        {
            cntEv++;
            mxEv = max(mxEv, arr[i]);
        }
    }
    int ans = 0;
    if (cntOb > 0 && cntEv > 0)
    {
        sort(arr, arr + n);
        int i = 0;
        while (i < n)
        {
            if (arr[i] % 2 == 0)
            {
                if (arr[i] < mxOd)
                {
                    ans++;
                    mxOd += arr[i];
                }
                else
                {
                    ans += 2;
                    mxOd += arr[i] + mxEv;
                }
            }
            i++;
        }
    }
    cout << ans << endl;
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