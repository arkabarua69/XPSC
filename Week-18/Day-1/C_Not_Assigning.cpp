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
    vector<int> a(n + 1, 0);
    vector<vector<int>> b(n + 1);
    vector<int> X(n), Y(n);

    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        b[u].push_back(v);
        b[v].push_back(u);
        X[i] = u;
        Y[i] = v;
    }

    for (int i = 1; i <= n; i++)
    {
        if (b[i].size() > 2)
        {
            cout << "-1" << nl;
            return;
        }
    }

    function<void(int)> dfs = [&](int u)
    {
        for (int v : b[u])
        {
            if (!a[v])
            {
                a[v] = a[u] + 1;
                dfs(v);
            }
        }
    };

    for (int i = 1; i <= n; i++)
    {
        if (b[i].size() < 2)
        {
            a[i] = 1;
            dfs(i);
            break;
        }
    }

    for (int i = 1; i < n; i++)
    {
        if (a[X[i]] > a[Y[i]])
            swap(X[i], Y[i]);
        if (a[X[i]] & 1)
            cout << "2 ";
        else
            cout << "3 ";
    }
    cout << nl;
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