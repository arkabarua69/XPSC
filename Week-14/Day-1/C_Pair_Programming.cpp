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

void GunJon(int k, int n, int m, vector<int> &a, vector<int> &b)
{
    vector<int> res;
    int ai = 0, bi = 0;
    while (ai < n || bi < m)
    {
        if ((ai == n || a[ai] > k) && (bi == m || b[bi] > k))
        {
            cout << -1 << nl;
            return;
        }
        while (ai < n && a[ai] <= k)
        {
            res.push_back(a[ai]);
            if (a[ai] == 0)
                k++;
            ai++;
        }
        while (bi < m && b[bi] <= k)
        {
            res.push_back(b[bi]);
            if (b[bi] == 0)
                k++;
            bi++;
        }
    }
    for (int x : res)
        cout << x << " ";
    cout << nl;
}

int main()
{
    Speed_code;
    int t;
    cin >> t;
    while (t--)
    {
        int k, n, m;
        cin >> k >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        GunJon(k, n, m, a, b);
    }
    return 0;
}
/*Code by Gunjon*/