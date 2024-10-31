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
    unordered_map<string, int> cnt;

    while (n--)
    {
        string s;
        cin >> s;

        if (cnt[s] == 0)
        {

            cout << "OK" << endl;
            cnt[s] = 1;
        }
        else
        {

            int count = cnt[s];
            string s1 = s + to_string(count);
            while (cnt[s1] > 0)
            {
                count++;
                s1 = s + to_string(count);
            }

            cout << s1 << endl;
            cnt[s] = count + 1;
            cnt[s1] = 1;
        }
    }
}
/*Code by Gunjon*/