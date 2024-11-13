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
        string s;
        cin >> s;
        vector<int> v;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                v.push_back((n - 1 - i) - i);
                sum += i;
            }
            else
            {
                v.push_back(i - (n - 1 - i));
                sum += (n - 1 - i);
            }
        }
        sort(v.begin(), v.end(), greater<int>());

        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
                sum += v[i];
            cout << sum << " ";
        }

        cout << nl;
    }
}
/*Code by Gunjon*/