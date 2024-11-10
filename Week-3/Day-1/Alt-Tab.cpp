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

    vector<string> v;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        auto x = find(v.begin(), v.end(), s);
        if (x != v.end())
        {
            v.erase(x);
        }

        v.insert(v.begin(), s);
    }

    for (auto s : v)
    {
        cout << s.substr(s.size() - 2);
    }

    cout << endl;
}
/*Code by Gunjon*/