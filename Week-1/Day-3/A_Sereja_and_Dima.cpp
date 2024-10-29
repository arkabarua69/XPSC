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
    int s = 0, d = 0;
    int l = 0, r = n - 1;
    bool f = true;
    while (l <= r)
    {
        if (v[l] > v[r])
        {
            if (f)
                s += v[l];
            else
                d += v[l];
            l++;
        }
        else
        {
            if (f)
                s += v[r];
            else
                d += v[r];
            r--;
        }
        f = !f;
    }
    cout << s << " " << d << nl;
}
/*Code by Gunjon*/