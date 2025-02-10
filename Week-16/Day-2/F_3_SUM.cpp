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
    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i] % 10]++;
    }
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            for (int k = 0; k <= 9; k++)
            {
                if ((i + j + k) == 3 || (i + j + k) == 13 || (i + j + k) == 23)
                {
                    int x[10] = {0};
                    x[i]++;
                    x[j]++;
                    x[k]++;
                    bool f = true;
                    for (int s = 0; s < 10; s++)
                    {
                        if (mp[s] < x[s])
                            f = false;
                    }
                    if (f)
                    {
                        cy;
                        return;
                    }
                }
            }
        }
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