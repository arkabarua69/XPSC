#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define it(_) (_).begin(), (_).end()
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define Speed_code               \
    ios::sync_with_stdio(false); \
    cin.tie(0);
void GunJon()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = 0;
    set<int> st, st_2;
    int a = -1, b = -1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'p')
        {
            x++;
            st.insert(i);
            if (b == -1)
                b = i;
        }
        if (s[i] == 's')
        {
            st_2.insert(i);
            a = i;
        }
    }
    if (x == n)
    {
        cy;
        return;
    }
    st.erase(n - 1);
    st_2.erase(0);
    if (!st.empty() and !st_2.empty())
    {
        cn;
        return;
    }
    (a != -1 and b != -1 and a > b) ? cn : cy;
}
int main()
{
    Speed_code;
    int $;
    cin >> $;
    while ($--)
        GunJon();
}
/*Code by Gunjon*/