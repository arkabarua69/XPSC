#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int search(string pat, string txt)
{
    int n = txt.length(), m = pat.length();
    if (m > n)
        return 0;

    vector<int> a(26, 0), b(26, 0);
    int cnt = 0;

    for (char c : pat)
    {
        a[c - 'a']++;
    }

    for (int i = 0; i < m; i++)
    {
        b[txt[i] - 'a']++;
    }

    if (a == b)
        cnt++;

    for (int i = m; i < n; i++)
    {

        b[txt[i] - 'a']++;

        b[txt[i - m] - 'a']--;

        if (a == b)
            cnt++;
    }

    return cnt;
}

int main()
{
    string txt, pat;
    cin >> txt >> pat;

    int ans = search(pat, txt);
    cout << ans << nl;
}

/*Code by Gunjon*/