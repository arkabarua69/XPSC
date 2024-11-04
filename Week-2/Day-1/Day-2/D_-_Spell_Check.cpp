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

    string s1 = "Timur";
    sort(s1.begin(), s1.end());

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        if (n == 5)
        {
            string s2 = s;
            sort(s2.begin(), s2.end());

            (s1 == s2) ? cy : cn;
        }
        else
        {
            cn;
        }
    }
}
/*Code by Gunjon*/