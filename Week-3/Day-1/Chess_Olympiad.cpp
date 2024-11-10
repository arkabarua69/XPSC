#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "Yes" << endl
#define cn cout << "No" << endl
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int r = 4 - (x + y + z);
    double a = x + 0.5 * y, b = y * 0.5 + z, mx = a + r;

    (mx > b) ? cy : cn;
}
/*Code by Gunjon*/
