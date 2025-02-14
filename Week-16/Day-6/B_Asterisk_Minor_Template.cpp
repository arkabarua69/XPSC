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
void Gunjon()
{
    string a, b;
    cin >> a >> b;
    if (a[0] == b[0])
    {
        cy;
        cout << a[0] << '*' << endl;
        return;
    }
    if (a[a.size() - 1] == b[b.size() - 1])
    {
        cy;
        cout << '*' << a[a.size() - 1] << endl;
        return;
    }
    bool good = false;
    for (int i = 0; i + 2 - 1 < a.size() && !good; i++)
    {
        for (int j = 0; j + 2 - 1 < b.size(); j++)
        {
            if (a[i] == b[j] && a[i + 1] == b[j + 1])
            {
                good = true;
                cy;
                cout << '*' << a[i] << a[i + 1] << '*' << endl;
                break;
            }
        }
    }
    if (!good)
    {
        cn;
    }
}
int main()
{
    Speed_code;
    int $;
    cin >> $;
    while ($--)
        Gunjon();
}
/*Code by Gunjan*/