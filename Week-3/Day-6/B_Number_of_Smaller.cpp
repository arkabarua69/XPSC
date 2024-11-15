#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int cnt = 0, i = 0, j = 0;

    while (j < m)
    {
        if (i < n && a[i] < b[j])
        {
            i++;
            cnt++;
        }
        else
        {
            j++;
            cout << cnt << " ";
        }
    }
}
/*Code by Gunjon*/