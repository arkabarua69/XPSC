#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
            cnt++;
    }
    cout << cnt;
}
/*Code by Gunjon*/