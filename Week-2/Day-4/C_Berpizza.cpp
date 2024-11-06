#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, y, z = 1;
    cin >> n;

    queue<int> q;
    priority_queue<pair<int, int>> pq;
    vector<bool> v(n + 1, false);

    while (n--)
    {
        cin >> x;
        if (x == 1)
        {
            cin >> y;
            q.push(z);
            pq.push({y, -z});
            z++;
        }
        else if (x == 2)
        {
            while (v[q.front()])
                q.pop();
            cout << q.front() << " ";
            v[q.front()] = true;
            q.pop();
        }
        else
        {
            while (v[-pq.top().second])
                pq.pop();
            cout << -pq.top().second << " ";
            v[-pq.top().second] = true;
            pq.pop();
        }
    }
    cout << endl;
}
/*Code by Gunjon*/