#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl

int main()
{
    int n;
    cin >> n;

    stack<string> st;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        st.push(s);
    }

    while (!st.empty())
    {
        string s = st.top();
        st.pop();
        int sz = s.size() - 1;
        if (mp[s] == 0)
            cout << s[sz - 1] << s[sz];
        mp[s]++;
    }

    cout << nl;
}
/*Code by Gunjon*/