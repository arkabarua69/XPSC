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
    int d = 0;
    int t = n;
    if (t == 0)
        d = 1;
    else
    {
        while (t > 0)
        {
            t /= 10;
            d++;
        }
    }
    for (int i = 1; i <= 4 - d; i++)
    {
        cout << "0";
    }
    cout << n << nl;
}
/*Code by Gunjon*/