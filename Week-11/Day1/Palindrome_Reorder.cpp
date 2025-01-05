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
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto ch : s)
    {
        mp[ch]++;
    }
    deque<char> dq;
    char od = '*';
    for (char ch = 'A'; ch <= 'Z'; ch++)
    {
        if (mp[ch] % 2 == 0)
        {
            while (mp[ch] > 0)
            {
                dq.push_back(ch);
                dq.push_front(ch);
                mp[ch] -= 2;
            }
        }
        else
        {
            if (od == '*')
            {
                while (mp[ch] > 1)
                {
                    dq.push_back(ch);
                    dq.push_front(ch);
                    mp[ch] -= 2;
                }
                od = ch;
            }
            else
            {
                cout << "NO SOLUTION" << nl;
                return;
            }
        }
    }
    if (dq.size() == 0)
        cout << s << nl;
    for (int i = 0; i < dq.size(); i++)
    {
        cout << dq[i];
        if ((i + 1) == dq.size() / 2 && od != '*')
            cout << od;
    }
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