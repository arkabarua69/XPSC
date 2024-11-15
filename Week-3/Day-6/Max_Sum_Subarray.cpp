#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
long long maximumSumSubarray(vector<int> &arr, int k)
{
    int n = arr.size();
    ll ans = 0, sum = 0;
    int i = 0, j = 0;
    while (j < n)
    {
        sum += arr[j];
        if ((j - i + 1) == k)
        {
            ans = max(ans, sum);
            sum -= arr[i];
            i++;
        }
        j++;
    }
    return ans;
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll ans = maximumSumSubarray(v, k);
    cout << ans << nl;
}
/*Code by Gunjon*/