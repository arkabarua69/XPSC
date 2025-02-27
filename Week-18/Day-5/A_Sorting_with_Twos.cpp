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
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    int l;
    for (int r = 1; r <= n; r <<= 1)
    {
        l = (r >> 1) + 1;
        for (int i = l; i <= r; i++)
            for (int j = i + 1; j <= r; j++)
                if (v[j] < v[i])
                {
                    puts("NO");
                    return;
                }
    }
    l = (1 << __lg(n)) + 1;
    for (int i = l; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            if (v[j] < v[i])
            {
                puts("NO");
                return;
            }
    puts("YES");
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