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
const int N = 2e5 + 10;
void GunJon()
{
    int n;
    cin >> n;
    int arr[n];
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            sum1 += arr[i];
        }
        else
        {
            sum2 += arr[i];
        }
    }
    if ((sum1 % 2 == 0 && sum2 % 2 == 0) || (sum1 % 2 == 1 && sum2 % 2 == 1))
    {
        cout << "YES" << nl;
    }
    else
    {
        cout << "NO" << nl;
    }
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