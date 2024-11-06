#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        map<int, int> pos1, pos2;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (!pos1.count(x))
                pos1[x] = i;
            pos2[x] = i;
        }

        while (k--)
        {
            int a, b;
            cin >> a >> b;
            (pos1.count(a) && pos1.count(b) && pos1[a] <= pos2[b]) ? cy : cn;
        }
    }
}
/*Code by Gunjon*/