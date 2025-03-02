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
const int N = 2e5 + 5;
int a, b, arr[N];
void GunJon()
{

    cin >> a >> b;
    int cnt = 0, ans = 0;
    for (int i = 1; i <= a; i++)
    {
        cin >> arr[i];
        if (arr[i] >= b)
            cnt += arr[i];
        if (arr[i] == 0 and cnt)
            ans++, cnt--;
    }
    cout << ans << endl;
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