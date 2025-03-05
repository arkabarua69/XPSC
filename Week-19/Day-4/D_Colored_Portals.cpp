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
const int MAX = 1e9;
void GunJon()
{
    int a, b;
    cin >> a >> b;
    vector<string> x(a + 1);
    for (int i = 1; i <= a; ++i)
    {
        cin >> x[i];
    }
    set<int> S;
    auto func = [&](int s, int t)
    {
        int ans = 0;
        if (x[s][0] == x[t][0])
            ans++;
        if (x[s][0] == x[t][1])
            ans++;
        if (x[s][1] == x[t][0])
            ans++;
        if (x[s][1] == x[t][1])
            ans++;
        return ans;
    };
    for (int i = 1; i < a; ++i)
    {
        if (func(i, i + 1) == 1)
            S.insert(i);
    }
    while (b--)
    {
        int c, d;
        cin >> c >> d;
        if (c > d)
            swap(c, d);
        if (c == d)
        {
            cout << "0\n";
        }
        else
        {
            if (func(c, d) >= 1)
            {
                cout << abs(c - d) << "\n";
            }
            else
            {
                auto it = S.lower_bound(c);
                if (it != S.end() && (*it) < d)
                {
                    cout << abs(c - d) << "\n";
                }
                else
                {
                    int ans1 = MAX;
                    int ans2 = MAX;
                    it = S.lower_bound(c);
                    if (it != S.end())
                    {
                        int val = (*it) + 1;
                        ans1 = (val - c) + (val - d);
                    }
                    it = S.lower_bound(c);
                    if (it != S.begin())
                    {
                        it--;
                        int val = (*it);
                        ans2 = (c - val) + (d - val);
                    }
                    int ans = min(ans1, ans2);
                    if (ans >= MAX)
                    {
                        cout << "-1\n";
                    }
                    else
                    {
                        cout << ans << "\n";
                    }
                }
            }
        }
    }
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