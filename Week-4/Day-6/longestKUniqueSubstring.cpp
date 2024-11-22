#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl

int longestKUniqueSubstring(const string &s, int k)
{
    if (k == 0)
        return -1;

    map<char, int> mp;
    int mx = -1, l = 0;

    for (int right = 0; right < s.size(); ++right)
    {

        mp[s[right]]++;

        while (mp.size() > k)
        {
            mp[s[l]]--;
            if (mp[s[l]] == 0)
            {
                mp.erase(s[l]);
            }
            l++;
        }

        if (mp.size() == k)
        {
            mx = max(mx, right - l + 1);
        }
    }

    return mx;
}

int main()
{
    string s;
    int k;
    cin >> s >> k;

    int result = longestKUniqueSubstring(s, k);
    (result != -1) ? cout << result << nl : cout << k << nl;
}
/*Code by Gunjon*/