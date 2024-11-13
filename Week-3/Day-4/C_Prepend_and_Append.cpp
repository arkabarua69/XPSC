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
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (s[i] == s[j])
                break;
            i++;
            j--;
        }
        cout << j - i + 1 << nl;
    }
}
/*Code by Gunjon*/