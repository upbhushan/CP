#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005;

void dfs(int node, int component, vector<vector<int>>& adj, vector<int>& components) {
    components[node] = component;
    for (int neighbor : adj[node]) {
        if (components[neighbor] == -1) {
            dfs(neighbor, component, adj, components);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m1, m2;
        cin >> n >> m1 >> m2;

        // Graph representations for F and G
        vector<vector<int>> adjF(n + 1), adjG(n + 1);

        // Read edges for F
        for (int i = 0; i < m1; ++i) {
            int u, v;
            cin >> u >> v;
            adjF[u].push_back(v);
            adjF[v].push_back(u);
        }

        // Read edges for G
        for (int i = 0; i < m2; ++i) {
            int u, v;
            cin >> u >> v;
            adjG[u].push_back(v);
            adjG[v].push_back(u);
        }

        // Identify connected components in F
        vector<int> componentsF(n + 1, -1);
        int componentF = 0;
        for (int i = 1; i <= n; ++i) {
            if (componentsF[i] == -1) {
                dfs(i, componentF++, adjF, componentsF);
            }
        }

        // Identify connected components in G
        vector<int> componentsG(n + 1, -1);
        int componentG = 0;
        for (int i = 1; i <= n; ++i) {
            if (componentsG[i] == -1) {
                dfs(i, componentG++, adjG, componentsG);
            }
        }

        // Perform operations to make F match G
        vector<pair<int, int>> operations;
        for (int u = 1; u <= n; ++u) {
            for (int v = u + 1; v <= n; ++v) {
                if (componentsF[u] != componentsF[v] && componentsG[u] != componentsG[v]) {
                    operations.emplace_back(u, v);
                    // Merge components in F
                    int oldComponent = componentsF[v];
                    for (int i = 1; i <= n; ++i) {
                        if (componentsF[i] == oldComponent) {
                            componentsF[i] = componentsF[u];
                        }
                    }
                }
            }
        }

        // Output results
        cout << operations.size() << '\n';
        for (auto ele : operations) {
            cout << ele.first << " " << ele.second << '\n';
        }
    }

    return 0;
}
