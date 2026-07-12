class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int,int> mpp;
        for(auto it:nums){
            mpp[it]++;
        }

        for(auto it:mpp){
            if(it.second>(n/3)){
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};