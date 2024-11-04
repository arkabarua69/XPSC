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

        string s1, s2;
        cin >> s1 >> s2;

        for (int i = 0; i < n; ++i)
        {
            if (s1[i] == 'G' || s1[i] == 'B')
                s1[i] = 'X';
            if (s2[i] == 'G' || s2[i] == 'B')
                s2[i] = 'X';
        }

        (s1 == s2) ? cy : cn;
    }
}
/*Code by Gunjon*/