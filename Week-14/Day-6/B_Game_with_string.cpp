#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define it(_) (_).begin(), (_).end()
#define cy cout << "Yes" << endl
#define cn cout << "No" << endl
#define Speed_code               \
    ios::sync_with_stdio(false); \
    cin.tie(0);
void GunJon()
{
    string s;
    cin >> s;
    int i = 0, j = 1;
    bool f = false;
    stack<char> st;
    while (i < s.size())
    {
        if (st.empty())
            st.push(s[i]);
        else
        {
            if (st.top() == s[i])
            {
                st.pop();
                if (!f)
                    f = true;
                else
                    f = false;
            }
            else
                st.push(s[i]);
        }
        i++;
    }
    (!f ? cn : cy);
}
int main()
{
    Speed_code;
    // int $;
    // cin >> $;
    // while ($--)
    GunJon();
}
/*Code by Gunjon*/