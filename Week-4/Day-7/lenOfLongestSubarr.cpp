#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl

int lenOfLongestSubarr(const vector<int> &arr, int k)
{
    map<int, int> mp;
    int sum = 0;
    int mx = 0;

    for (int i = 0; i < arr.size(); i++)
    {

        sum += arr[i];

        if (sum == k)
        {
            mx = i + 1;
        }

        int requiredSum = sum - k;

        if (mp.find(requiredSum) != mp.end())
        {

            mx = max(mx, i - mp[requiredSum]);
        }

        if (mp.find(sum) == mp.end())
        {
            mp[sum] = i;
        }
    }

    return mx;
}

int main()
{
    int n, k;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cin >> k;

    int result = lenOfLongestSubarr(arr, k);
    cout << result << nl;
}
/*Code by Gunjon*/