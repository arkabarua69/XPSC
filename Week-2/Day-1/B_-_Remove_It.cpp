#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    int n, x, a;
    cin >> n >> x;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        (a != x) ? cout << a : cout << " ";
    }
}
/*Code by Gunjon*/