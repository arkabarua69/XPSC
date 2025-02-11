#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define it(_) (_).begin(), (_).end()
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define Speed_code               \
    ios::sync_with_stdio(false); \
    cin.tie(0);
void GunJon()
{

    int n;
    cin >> n;
    vector<int> b(10);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b[x % 10]++;
    }

    for (int i1 = 0; i1 < 10; i1++)
    {
        b[i1]--;
        for (int i2 = 0; i2 < 10; i2++)
        {
            b[i2]--;
            for (int i3 = 0; i3 < 10; i3++)
            {
                b[i3]--;
                if ((i1 + i2 + i3) % 10 == 3 && b[i1] >= 0 && b[i2] >= 0 && b[i3] >= 0)
                {
                    cy;
                    return;
                }
                b[i3]++;
            }
            b[i2]++;
        }
        b[i1]++;
    }
    cn;
}
int main()
{
    Speed_code;
    int $;
    cin >> $;
    while ($--)
        GunJon();
}
/*Code by Gunjon*/