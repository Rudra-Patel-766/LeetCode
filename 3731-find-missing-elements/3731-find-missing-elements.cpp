class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int min=nums[0];
        int max=nums[nums.size()-1];

        unordered_map<int,int> mpp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        for(int i=min;i<max;i++){
            if(mpp[i]==0){
                ans.push_back(i);
            }
        }

        return ans;
    }
};