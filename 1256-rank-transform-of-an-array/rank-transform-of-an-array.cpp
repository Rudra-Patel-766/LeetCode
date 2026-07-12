class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> temp = arr;
        vector<int> ans;

        sort(temp.begin(), temp.end());

        unordered_map<int, int> mpp;
        int rank = 1;

        for (int i = 0; i < n; i++) {
            if (i == 0 || temp[i] != temp[i - 1]) {
                mpp[temp[i]] = rank++;
            }
        }

        for (int i = 0; i < n; i++) {
            ans.push_back(mpp[arr[i]]);
        }

        return ans;
    }
};