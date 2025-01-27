#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define it(_) (_).begin(), (_).end()
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define Speed_code               \
    ios::sync_with_stdio(false); \
    cin.tie(0);
void GunJon()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(it(v));
    int ans = 0;
    for (int x = 2; x <= 2 * n; x++)
    {
        int cnt = 0;
        int arr[51] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == true || arr[j])
                    continue;
                if (v[i] + v[j] == x)
                {
                    arr[i] = 1;
                    arr[j] = 1;
                    cnt++;
                    break;
                }
            }
        }
        ans = max(ans, cnt);
    }
    cout << ans << nl;
}
int main()
{
    Speed_code;
    int $;
    cin >> $;
    while ($--)
        GunJon();
}
/*Code by Gunjon*/