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

    set<string> st;
    string s;

    for (int i = 0; i < n; ++i)
    {
        cin >> s;

        (st.count(s)) ? cy : cn;
        st.insert(s);
    }
}
/*Code by Gunjon*/
