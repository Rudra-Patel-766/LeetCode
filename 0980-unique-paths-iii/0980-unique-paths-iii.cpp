
class Solution {
public:
    int m, n;
    int dfs(vector<vector<int>>& grid, int r, int c, int remaining) {
        if (r < 0 || c < 0 || r >= m || c >= n || grid[r][c] == -1)
            return 0;

        if (grid[r][c] == 2)
            return remaining == 1 ? 1 : 0;

        int temp = grid[r][c];
        grid[r][c] = -1;

        int paths = dfs(grid, r + 1, c, remaining - 1)
                  + dfs(grid, r - 1, c, remaining - 1)
                  + dfs(grid, r, c + 1, remaining - 1)
                  + dfs(grid, r, c - 1, remaining - 1);

        grid[r][c] = temp;
        return paths;
    }

    int uniquePathsIII(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();

        int sr = 0, sc = 0, remaining = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] != -1)
                    remaining++;

                if (grid[i][j] == 1) {
                    sr = i;
                    sc = j;
                }
            }
        }

        return dfs(grid, sr, sc, remaining);
    }
};
