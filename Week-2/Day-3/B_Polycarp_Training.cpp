#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int k = 1, day = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= k)
        {
            day++;
            k++;
        }
    }
    cout << day << nl;
}
/*Code by Gunjon*/