
class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>> adj(n + 1);

        // Build an undirected graph
        for (auto& d : dislikes) {
            int a = d[0];
            int b = d[1];

            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        // 0 = unvisited, 1 and -1 = two groups
        vector<int> color(n + 1, 0);
        queue<int> q;

        // Check every connected component
        for (int i = 1; i <= n; i++) {
            if (color[i] != 0)
                continue;

            color[i] = 1;
            q.push(i);

            while (!q.empty()) {
                int u = q.front();
                q.pop();

                for (int v : adj[u]) {
                    // Adjacent people cannot share a group
                    if (color[v] == color[u])
                        return false;

                    // Assign the opposite group
                    if (color[v] == 0) {
                        color[v] = -color[u];
                        q.push(v);
                    }
                }
            }
        }

        return true;
    }
};
