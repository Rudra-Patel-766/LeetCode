class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        vector<vector<int>> red(n), blue(n);

        for (auto &e : redEdges)
            red[e[0]].push_back(e[1]);

        for (auto &e : blueEdges)
            blue[e[0]].push_back(e[1]);

        vector<vector<int>> dist(n, vector<int>(2, INT_MAX));
        queue<pair<int,int>> q;

        dist[0][0] = 0;
        dist[0][1] = 0;

        q.push({0, 0});
        q.push({0, 1});

        while (!q.empty()) {
            auto [u, color] = q.front();
            q.pop();

            int nextColor = 1 - color;
            vector<int>& edges = (nextColor == 0) ? red[u] : blue[u];

            for (int v : edges) {
                if (dist[v][nextColor] == INT_MAX) {
                    dist[v][nextColor] = dist[u][color] + 1;
                    q.push({v, nextColor});
                }
            }
        }

        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            int d = min(dist[i][0], dist[i][1]);
            ans[i] = (d == INT_MAX) ? -1 : d;
        }

        return ans;
    }
};