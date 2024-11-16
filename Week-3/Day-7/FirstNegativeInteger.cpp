#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl

vector<int> FirstNegativeInteger(vector<int> &arr, int k)
{
    vector<int> ans;
    queue<int> pq;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {

        if (arr[i] < 0)
        {
            pq.push(i);
        }

        if (!pq.empty() && pq.front() < i - k + 1)
        {
            pq.pop();
        }

        if (i >= k - 1)
        {
            (!pq.empty()) ? ans.push_back(arr[pq.front()]) : ans.push_back(0);
        }
    }

    return ans;
}

int main()
{
    int n, k;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> k;

    vector<int> ans = FirstNegativeInteger(arr, k);

    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << nl;

    return 0;
}

/*Code by Gunjon*/
