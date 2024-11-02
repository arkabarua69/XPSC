#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    int n, a, a1, a2, b, b1;
    cin >> n >> a >> a1 >> a2 >> b >> b1;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    int t = 0, i = 0;

    while (i < n)
    {
        int l = v[i].first;
        int r = v[i].second;

        t += (r - l) * a;

        if (i < n - 1)
        {
            int t1 = v[i + 1].first - r;

            if (t1 <= b)

                t += t1 * a;

            else if (t1 <= b + b1)

                t += b * a + (t1 - b) * a1;

            else

                t += b * a + b1 * a1 + (t1 - b - b1) * a2;
        }
        i++;
    }

    cout << t << endl;
}
/*Code by Gunjon*/