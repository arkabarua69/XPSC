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
        int a, b, c;
        cin >> a >> b >> c;

        int x = abs(a - 1), y = abs(b - c) + abs(c - 1);

        if (x < y)

            cout << 1 << endl;

        else if (y < x)

            cout << 2 << endl;

        else

            cout << 3 << endl;
    }
}
/*Code by Gunjon*/