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

        string s;
        cin >> s;

        vector<pair<int, int>> like, dislike;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                dislike.emplace_back(v[i], i);
            }
            else
            {
                like.emplace_back(v[i], i);
            }
        }

        sort(dislike.begin(), dislike.end());
        sort(like.begin(), like.end());

        vector<int> ans(n);
        int r = 1;

        for (auto &c : dislike)
        {
            ans[c.second] = r++;
        }
        for (auto &c : like)
        {
            ans[c.second] = r++;
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << nl;
    }
}
/*Code by Gunjon*/