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
        int mat[n][n - 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> mat[i][j];
            }
        }
        map<int, int> mp;
        for (int j = 0; j < n - 1; j++)
        {
            int a = 0, b = 0;
            for (int i = 0; i < n; i++)
            {
                if (a == 0)
                    a = mat[i][j];
                else if (b == 0 && a != mat[i][j])
                {
                    b = mat[i][j];
                }
                if (j == 0)
                    mp[mat[i][j]]++;
            }
            if (j == 0)
            {
                if (mp[a] > mp[b])
                    cout << a << " " << b << " ";
                else
                    cout << b << " " << a << " ";
            }
            else
            {
                if (mp[a])
                {
                    cout << b << " ";
                    mp[b] = 1;
                }
                else

                {
                    cout << a << " ";
                    mp[a] = 1;
                }
            }
        }
        cout << nl;
    }
}
/*Code by Gunjon*/