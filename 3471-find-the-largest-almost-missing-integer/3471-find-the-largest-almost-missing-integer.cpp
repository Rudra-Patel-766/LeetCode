class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();

        if (k==n){
            return *max_element(nums.begin(),nums.end());
        }

        unordered_map<int, int> mpp;

        for(int it:nums){
            mpp[it]++;
        }

        if(k==1){
            int ans=-1;
            for(auto val:mpp){
                if(val.second==1){
                    ans=max(ans,val.first);
                }
            }
            return ans;
        }

        int ans = -1;
        if(mpp[nums[0]]==1){
            ans=max(ans,nums[0]);
        }

        if(mpp[nums[n-1]]==1){
            ans=max(ans,nums[n-1]);
        }
        return ans;
    }
};