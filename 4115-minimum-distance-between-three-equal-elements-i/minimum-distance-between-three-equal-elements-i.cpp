class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, vector<int>> mpp;

        int dist = INT_MAX;

        for(int i = 0; i < n; i++){
            mpp[nums[i]].push_back(i);
        }

        for(auto val : mpp){
            vector<int> ind = val.second;

            if(ind.size() < 3) continue;

            for(int i = 0; i + 2 < ind.size(); i++){
                int currDist = 2*(ind[i+2] - ind[i]);
                dist = min(dist, currDist);
            }
        }

        return dist == INT_MAX ? -1 : dist;
    }
};