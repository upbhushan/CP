#include <bits/stdc++.h>
using namespace std;
int bfs(vector<vector<int>> &v, vector<vector<int>> &vis, int i, int j, int n, int m) {
    int col = v[i][j], comp_size = 0;
    queue<pair<int, int>> q;
    q.push({i, j});
    vis[i][j] = 1;

    vector<int> dx = {1, -1, 0, 0};
    vector<int> dy = {0, 0, -1, 1};

    while (!q.empty()) {
        auto [curr_row, curr_col] = q.front();
        q.pop();
        comp_size++;

        for (int k = 0; k < 4; k++) {
            int nrow = curr_row + dx[k];
            int ncol = curr_col + dy[k];

            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m) {
                if (!vis[nrow][ncol] && v[nrow][ncol] == col) {
                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }
    }
    return comp_size;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> v[i][j];

    unordered_map<int, pair<int, int>> mp;
    vector<vector<int>> vis(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!vis[i][j]) {
                int comp_size = bfs(v, vis, i, j, n, m);
                if (comp_size == 1)
                    mp[v[i][j]].first++;
                else
                    mp[v[i][j]].second++;
            }
        }
    }

    int total = 0, optimal = 0;
    for (auto &[col, counts] : mp) {
        int cost=0;
         if(counts.second > 0){
            cost=2;
         }
         else{
            cost=1;
         }
        total += cost;
        optimal = max(optimal, cost);
    }
    int final_ans=total - optimal;
    cout << final_ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
