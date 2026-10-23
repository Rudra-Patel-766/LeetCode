class Solution {
public:
    string shortestSuperstring(vector<string>& words) {
        int n = words.size();

        int overlap[12][12] = {};

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j)
                    continue;

                int len = min(words[i].size(), words[j].size());

                for (int k = len; k >= 1; k--) {
                    if (words[i].substr(words[i].size() - k) ==
                        words[j].substr(0, k)) {
                        overlap[i][j] = k;
                        break;
                    }
                }
            }
        }

        vector<vector<int>> dp(1 << n, vector<int>(n, -1));
        vector<vector<int>> parent(1 << n, vector<int>(n, -1));

        for (int i = 0; i < n; i++)
            dp[1 << i][i] = 0;

        for (int mask = 1; mask < (1 << n); mask++) {

            for (int last = 0; last < n; last++) {

                if (!(mask & (1 << last)))
                    continue;

                int prevMask = mask ^ (1 << last);

                if (prevMask == 0)
                    continue;

                for (int prev = 0; prev < n; prev++) {

                    if (!(prevMask & (1 << prev)))
                        continue;

                    int value = dp[prevMask][prev] + overlap[prev][last];

                    if (value > dp[mask][last]) {
                        dp[mask][last] = value;
                        parent[mask][last] = prev;
                    }
                }
            }
        }

        int mask = (1 << n) - 1;
        int last = 0;

        for (int i = 1; i < n; i++) {
            if (dp[mask][i] > dp[mask][last])
                last = i;
        }

        vector<int> order;

        while (last != -1) {
            order.push_back(last);

            int prev = parent[mask][last];

            mask ^= (1 << last);
            last = prev;
        }

        reverse(order.begin(), order.end());

        string ans = words[order[0]];

        for (int i = 1; i < order.size(); i++) {
            int a = order[i - 1];
            int b = order[i];

            ans += words[b].substr(overlap[a][b]);
        }

        return ans;
    }
};