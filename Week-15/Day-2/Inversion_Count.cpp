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
    vector<int> A(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }

    function<ll(vector<int> &, int, int)> ans = [&](vector<int> &arr, int l, int r) -> ll
    {
        if (l >= r)
            return 0;
        int mid = l + (r - l) / 2;
        ll cnt = ans(arr, l, mid) + ans(arr, mid + 1, r);
        vector<int> tmp(r - l + 1);
        int i = l, j = mid + 1, k = 0;
        while (i <= mid && j <= r)
        {
            if (arr[i] <= arr[j])

                tmp[k++] = arr[i++];

            else

                tmp[k++] = arr[j++], cnt += (mid - i + 1);
        }
        while (i <= mid)
            tmp[k++] = arr[i++];
        while (j <= r)
            tmp[k++] = arr[j++];
        for (int i = l; i <= r; ++i)
            arr[i] = tmp[i - l];
        return cnt;
    };

    cout << ans(A, 0, n - 1) << nl;
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