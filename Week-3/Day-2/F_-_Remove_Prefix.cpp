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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        set<int> st;
        int x = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (st.count(v[i]))
            {
                x = i + 1;
                break;
            }
            st.insert(v[i]);
        }

        cout << x << nl;
    }
}
/*Code by Gunjon*/