#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        priority_queue<int> pq;
        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {

                if (!pq.empty())
                {
                    ans += pq.top();
                    pq.pop();
                }
            }
            else

                pq.push(v[i]);
        }

        cout << ans << nl;
    }
}
/*Code by Gunjon*/