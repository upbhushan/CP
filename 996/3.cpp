// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// void solve() {
//     int n, m;
//     string s;
//     cin >> n >> m >> s;

//     vector<vector<long long>> grid(n, vector<long long>(m));
//     vector<long long> row_sum(n, 0), col_sum(m, 0);

//     // Read the grid and compute row and column sums
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < m; ++j) {
//             cin >> grid[i][j];
//             row_sum[i] += grid[i][j];
//             col_sum[j] += grid[i][j];
//         }
//     }

//     // Track the path cells
//     vector<pair<int, int>> path_cells;
//     int x = 0, y = 0;
//     path_cells.push_back({x, y});

//     for (char step : s) {
//         if (step == 'D') {
//             ++x;
//         } else if (step == 'R') {
//             ++y;
//         }
//         path_cells.push_back({x, y});
//     }

//     // Initialize the path values to balance row and column sums
//     vector<vector<long long>> result = grid;

//     // Calculate the row and column deficits
//     for (int i = 0; i < n; ++i) {
//         row_sum[i] = 0;
//         for (int j = 0; j < m; ++j) {
//             row_sum[i] += grid[i][j];
//         }
//     }

//     for (int j = 0; j < m; ++j) {
//         col_sum[j] = 0;
//         for (int i = 0; i < n; ++i) {
//             col_sum[j] += grid[i][j];
//         }
//     }

//     // Assign tentative values to path cells
//     for (int i = 0; i < path_cells.size() - 1; ++i) {
//         int r = path_cells[i].first;
//         int c = path_cells[i].second;

//         if (grid[r][c] == 0) {
//             // Calculate the required value based on row and column sum deficits
//             long long row_deficit = row_sum[r];
//             long long col_deficit = col_sum[c];

//             result[r][c] = (row_deficit + col_deficit);
//         }
//     }

//     // Print the result grid
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < m; ++j) {
//             cout << result[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    int ans=0;int cnt=0;
    // int l,r;
    for(int i=0;i<s.size();i++){
        if(s[i]!='a'){
            // l=i;
            cnt++;
            ans=max(ans,cnt);
        }
        else{
            // r=cnt;
            cnt=0;
        }
    }
    cout<<ans<<endl;
    return 0;
}