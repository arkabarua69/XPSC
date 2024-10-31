#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<string>> v(3, vector<string>(n));
        unordered_map<string, int> cnt;

        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> v[i][j];
                cnt[v[i][j]]++;
            }
        }

        vector<int> v1(3, 0);

        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                string word = v[i][j];
                if (cnt[word] == 1)
                    v1[i] += 3;
                else if (cnt[word] == 2)
                    v1[i] += 1;
            }
        }

        cout << v1[0] << " " << v1[1] << " " << v1[2] << endl;
    }
}
/*Code by Gunjon*/