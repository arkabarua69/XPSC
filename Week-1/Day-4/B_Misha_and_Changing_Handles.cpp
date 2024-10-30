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
    map<string, string> mp1, mp2;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if(mp2.find(s1) != mp2.end()){
            mp1[mp2[s1]]=s2;
            mp2[s2]=mp2[s1];
        }
        else{
            mp1[s1] = s2;
            mp2[s2] = s1;
        }

    }
    cout << mp1.size() << nl;
    for (auto e : mp1)
    {
        cout << e.first << " " << e.second << nl;
    }
}
/*Code by Gunjon*/