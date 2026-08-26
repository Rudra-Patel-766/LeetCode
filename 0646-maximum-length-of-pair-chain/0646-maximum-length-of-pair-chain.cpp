class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] < b[1];
             });

        int count = 0;
        int lastEnd = -1001;

        for (auto &p : pairs) {
            if (p[0] > lastEnd) {
                count++;
                lastEnd = p[1];
            }
        }

        return count;
    }
};