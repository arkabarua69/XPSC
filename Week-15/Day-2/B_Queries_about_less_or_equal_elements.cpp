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
    int n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(it(a));

    for (int i = 0; i < m; i++)
    {
        int lo=0,hi=n-1;
        while(lo<=hi){
            ll mid=(lo+hi)/2;
            if(a[mid]<=b[i]){
                lo=mid+1;
            }
            else {
                hi=mid-1;
            }
        }
        cout<<lo<<" ";
    }
} 
// O(N*N) -> O(N*logN)
int main()
{
    Speed_code;
    // int $;
    // cin >> $;
    // while ($--)
    GunJon();
}
/*Code by Gunjon*/