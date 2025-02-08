#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define nl endl
#define it(_) (_).begin(), (_).end()
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define Speed_code               \
    ios::sync_with_stdio(false); \
    cin.tie(0);
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
void GunJon()
{

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x ;
    pbds<pair<int,int>>pb;
    int i=0,j=0;
    while(j<n){
        pb.insert({v[j],j});

        if(j-i+1==k){
            int mid=k/2;
            if(k%2==0)mid--;
            auto x = pb.find_by_order(mid);
            cout<<x->first<<" ";
            pb.erase({v[i],i});
            i++;
        }
        j++;
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