#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
void GunJon()
{
    int n;
    cin >> n;
    int a = 1, b = n * n, c = 1;
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int x = 0; x < n; x++)
        {
            if (c)
            {
                arr[i][x] = b--;
                c = 0;
            }
            else
            {
                arr[i][x] = a++;
                c = 1;
            }
        }
        if (i & 1)
            reverse(arr[i], arr[i] + n);
    }

    for (int i = 0; i < n; i++)
    {
        for (int x = 0; x < n; x++)
        {
            cout << arr[i][x] << " ";
        }
        cout << nl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        GunJon();
    }
}
/*Code by Gunjon*/
