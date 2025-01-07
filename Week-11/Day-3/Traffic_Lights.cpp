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
    ll x,n;cin>>x>>n;
   vector<ll>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   set<ll>li;
   multiset<ll>len;
   li.insert(0);
   li.insert(x);
   len.insert(x);
   for(auto e : v){
    auto it = li.lower_bound(e);
    ll r = *it,l=*(--it);
    len.erase(len.find(r - l));
    len.insert(e - l);
    len.insert(r - e);
    li.insert(e);
    cout<<*len.rbegin()<<" ";
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