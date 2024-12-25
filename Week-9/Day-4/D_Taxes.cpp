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
bool fun(int n)
{
    int i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
            return false;
        i++;
    }
    return true;
}
void GunJon()
{
    int n, ans = 0;
    cin >> n;
    if (fun(n))
    {
        cout << 1;
        return;
    }
    if (n % 2 == 0)
    {
        cout << 2;
        return;
    }
    if (fun(n - 2))
    {
        cout << 2;
        return;
    }
    else
    {
        cout << 3;
        return;
    }
}
int main()
{
    Speed_code;
    // int $;
    // cin >> $;
    // while ($--)
    GunJon();
}
/*Code by Gunjon*/