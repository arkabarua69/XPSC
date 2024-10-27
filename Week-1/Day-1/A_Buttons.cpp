#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    int a, b;
    cin >> a >> b;
    int mx = max(a, b), mi = min(a, b);
    int sum = mx + max(mx - 1, mi);
    cout << sum << nl;
}
/*Code by Gunjon*/