class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int n=nums.size();

        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }

        vector<pair<int,int>> freq;
        for(auto it:mpp){
            freq.push_back({it.second,it.first});
        }

        sort(freq.rbegin(),freq.rend());

        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(freq[i].second);
        }

        return ans;
    }
};