#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
void GunJon()
{
    {
        int n;
        string s;
        cin >> n >> s;
        int arr[26] = {0};
        for (char c : s)
        {
            arr[c - 'a']++;
        }
        priority_queue<pair<int, char>> pq;
        for (int i = 0; i < 26; ++i)
        {
            if (arr[i] > 0)
                pq.push({arr[i], 'a' + i});
        }
        string ans;
        while (!pq.empty())
        {
            auto [cnt, ch_] = pq.top();
            pq.pop();
            if (!ans.empty() && ans.back() == ch_ && pq.size() > 0)
            {
                auto [cnt_, ch] = pq.top();
                pq.pop();
                ans += ch;
                if (--cnt_ > 0)
                    pq.push({cnt_, ch});
                pq.push({cnt, ch_});
            }
            else
            {
                ans += ch_;
                if (--cnt > 0)
                    pq.push({cnt, ch_});
            }
        }
        cout << ans << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        GunJon();
    }
}
/*Code by Gunjon*/