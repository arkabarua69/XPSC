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
    vector<vector<int>> grid(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> grid[i][j];
        }
    }

    vector<vector<bool>> visited(n, vector<bool>(m, false));
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};

    function<int(int, int)> dfs = [&](int x, int y)
    {
        if (x < 0 || x >= n || y < 0 || y >= m || grid[x][y] == 0 || visited[x][y])
        {
            return 0;
        }
        visited[x][y] = true;
        int volume = grid[x][y];
        for (int i = 0; i < 4; ++i)
        {
            volume += dfs(x + dx[i], y + dy[i]);
        }
        return volume;
    };

    int max_volume = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (grid[i][j] > 0 && !visited[i][j])
            {
                max_volume = max(max_volume, dfs(i, j));
            }
        }
    }
    cout << max_volume << nl;
}
int main()
{
    Speed_code;
    int $;
    cin >> $;
    while ($--)
        GunJon();
}
/*Code by Gunjon*/