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
    int n, a;
    cin >> n >> a;
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < a / 2 + a % 2; i++)
    {
        int arr[26];
        for (int &x : arr)
            x = 0;
        for (int x = i; x < n; x += a)
            arr[s[x] - 'a']++, (i != a / 2) ? arr[s[(x / a) * a + a - i - 1] - 'a']++ : 0;
        int mr = 0;
        int sum = 0;
        for (auto x : arr)
            mr = max(mr, x), sum += x;
        ans += sum - mr;
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