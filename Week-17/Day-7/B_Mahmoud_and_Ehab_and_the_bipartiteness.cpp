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
    vector<int> G[n];
    int arr[n], cnt = 0;

    for (int i = 0; i < n - 1; ++i)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    function<void(int, int)> dfs = [&](int b, int c)
    {
        arr[b] = c;
        if (c == 1)
            ++cnt;
        for (int to : G[b])
        {
            if (arr[to] == 0)
                dfs(to, 3 - c);
        }
    };

    memset(arr, 0, sizeof(arr));
    dfs(0, 1);
    cout << 1LL * cnt * (n - cnt) - (n - 1) << nl;
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