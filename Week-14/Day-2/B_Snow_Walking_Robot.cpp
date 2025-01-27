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
    int L = 0, R = 0, U = 0, D = 0, ans = 0;
    string s;
    cin >> s;
    n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
            L++;
        if (s[i] == 'U')
            U++;
        if (s[i] == 'D')
            D++;
        if (s[i] == 'R')
            R++;
    }
    ans += min(L, R) * 2 + min(U, D) * 2;
    if (min(U, D) == 0 and L > 0 and R > 0)
    {
        cout << "2" << endl
             << "LR" << endl;
        return;
    }
    if (min(L, R) == 0 and U > 0 and D > 0)
    {
        cout << "2" << endl
             << "UD" << endl;
        return;
    }
    cout << ans << endl;
    for (int i = 0; i < min(L, R); i++)
        cout << "R";
    for (int i = 0; i < min(U, D); i++)
        cout << "D";
    for (int i = 0; i < min(L, R); i++)
        cout << "L";
    for (int i = 0; i < min(U, D); i++)
        cout << "U";
    cout << endl;
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