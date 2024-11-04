#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int &c : v)
        {
            cin >> c;
        }

        for (int i = 0; i < n; ++i)
        {
            int cnt;
            string s;
            cin >> cnt >> s;

            int cnt_1 = count(s.begin(), s.end(), 'U');
            int cnt_2 = cnt - cnt_1;

            int ans = (v[i] - cnt_1 + cnt_2 + 10) % 10;

            cout << ans << " ";
        }
        cout << endl;
    }
}
/*Code by Gunjon*/
