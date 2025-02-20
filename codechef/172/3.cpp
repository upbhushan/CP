#include <bits/stdc++.h>
using namespace std;

// This solution uses a DP over bitmasks to solve the assignment (derangement) problem.
// (It will work only for small n – e.g. n up to 16 or so.)

class Solution {
public:
    // optShuffling: given n nodes and a list of edges (each edge is a vector of two integers, 1-indexed),
    // returns a pair {mi, ma} where mi is the minimal aggregate distance
    // and ma is the maximal aggregate distance possible when reassigning the node values
    // (with the rule that no node gets its original value).
    vector<int> optShuffling(int n, vector<vector<int>>& edges) {
        // Build the tree (0-indexed)
        vector<vector<int>> adj(n);
        for(auto &edge : edges) {
            int u = edge[0] - 1, v = edge[1] - 1;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
 
        // Precompute distances between every pair of nodes using BFS.
        // Since T is a tree, these are the unique shortest–path distances.
        vector<vector<int>> dist(n, vector<int>(n, 0));
        for (int start = 0; start < n; start++) {
            vector<int> d(n, -1);
            queue<int> q;
            d[start] = 0;
            q.push(start);
            while(!q.empty()){
                int cur = q.front();
                q.pop();
                for (int nxt : adj[cur]) {
                    if(d[nxt] == -1){
                        d[nxt] = d[cur] + 1;
                        q.push(nxt);
                    }
                }
            }
            dist[start] = d;
        }
 
        // We now want a derangement f on {0,1,...,n-1} (which corresponds to nodes 1…n)
        // such that for each node i the cost is dist[i][f(i)].
        // We use DP over bitmasks.
        // Let dp_min[mask] = minimum total cost for assigning the first k nodes
        // (where k = number of bits set in mask) and where 'mask' indicates which values have been used.
        // We must never assign i -> i.
 
        int N = n;
        int fullMask = (1 << N) - 1;
        vector<int> dp_min(1 << N, INT_MAX);
        dp_min[0] = 0;
        // We assign nodes in order i = 0,1,...,n-1.
        for (int mask = 0; mask < (1 << N); mask++) {
            int i = __builtin_popcount(mask); // we are about to assign for node i
            if(i >= N) continue;
            for (int j = 0; j < N; j++) {
                // j is a candidate new value for node i provided j is not yet used and j != i.
                if(!(mask & (1 << j)) && (j != i)) {
                    int newMask = mask | (1 << j);
                    if(dp_min[mask] != INT_MAX && dp_min[mask] + dist[i][j] < dp_min[newMask])
                        dp_min[newMask] = dp_min[mask] + dist[i][j];
                }
            }
        }
        int mi = dp_min[fullMask];
 
        // Now do a similar DP for the maximum total cost.
        vector<int> dp_max(1 << N, -1);
        dp_max[0] = 0;
        for (int mask = 0; mask < (1 << N); mask++) {
            int i = __builtin_popcount(mask);
            if(i >= N) continue;
            for (int j = 0; j < N; j++) {
                if(!(mask & (1 << j)) && (j != i)) {
                    int newMask = mask | (1 << j);
                    dp_max[newMask] = max(dp_max[newMask], dp_max[mask] + dist[i][j]);
                }
            }
        }
        int ma = dp_max[fullMask];
 
        return {mi, ma};
    }
};
 
// Driver code to test the solution
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    Solution sol;
    // Example 1:
    // Tree: 1-2, 2-3, 3-4 (a path of 4 nodes)
    // An optimal minimal derangement is v = [2, 1, 4, 3] with total cost 4,
    // and an optimal maximal derangement is v = [4, 3, 2, 1] with total cost 8.
    vector<vector<int>> edges = {{1,2}};
    vector<int> result = sol.optShuffling(2, edges);
    cout << result[0] << " " << result[1] << "\n"; // Expected output: 4 8
    return 0;
}
