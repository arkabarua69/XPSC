#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    int n, m;
    cin >> n >> m;

    unordered_map<string, string> a;

    for (int i = 0; i < n; i++)
    {
        string s, p;
        cin >> s >> p;
        a[p] = s;
    }

    for (int i = 0; i < m; i++)
    {
        string s1, p;
        cin >> s1 >> p;

        string s2 = p.substr(0, p.size() - 1);

        cout << s1 << " " << p << " #" << a[s2] << endl;
    }
}
/*Code by Gunjon*/