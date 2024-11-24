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

        cout << n / 2 + n % 2 << nl;

        int i = 1, j = n * 3;
        while (i < j)
        {
            cout << i << " " << j << nl;
            i += 3;
            j -= 3;
        }
    }
}
/*Code by Gunjon*/