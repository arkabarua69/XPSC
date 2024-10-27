#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool f = 0;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            cout << i << nl;
            f = 1;
            break;
        }
    }
    if (f == 0)
        cout << -1 << nl;
}
/*Code by Gunjon*/