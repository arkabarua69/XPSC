#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    int n;
    ll k;
    cin >> n >> k;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    deque<int> mi, mx;
    int l = 0;
    ll cnt = 0;

    for (int i = 0; i < n; i++)
    {

        while (!mi.empty() && v[mi.back()] >= v[i])
        {
            mi.pop_back();
        }
        while (!mx.empty() && v[mx.back()] <= v[i])
        {
            mx.pop_back();
        }
        mi.push_back(i);
        mx.push_back(i);

        while (!mi.empty() && !mx.empty() && v[mx.front()] - v[mi.front()] > k)
        {
            l++;
            if (!mi.empty() && mi.front() < l)

                mi.pop_front();

            if (!mx.empty() && mx.front() < l)

                mx.pop_front();
        }

        cnt += (i - l + 1);
    }

    cout << cnt << endl;
}
/*Code by Gunjon*/