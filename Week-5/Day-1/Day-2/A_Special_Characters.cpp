#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
void GunJon()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool flag = true;
        if (n % 2 == 1)
            cn;
        else
        {
            cy;
            for (int i = 0; i < n / 2; i++)
            {
                if (flag)
                {
                    cout << "XX";
                    flag = false;
                }
                else
                {
                    cout << "YY";
                    flag = true;
                }
            }
            cout << nl;
        }
    }
}
int main()
{

    GunJon();
}
/*Code by Gunjon*/