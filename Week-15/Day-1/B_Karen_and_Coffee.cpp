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
const int N = 200000;
void GunJon()
{
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> v(N+3),sum(N+3);
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        v[l] ++;
        v[r + 1]--;
    }
    
    for(int i=1;i<=N;i++){
        v[i]+=v[i-1];
        sum[i]=sum[i-1]+(v[i]>=k);
    }
    while(q--){
        int l,r;cin>>l>>r;
        cout<<sum[r]-sum[l-1]<<nl;
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