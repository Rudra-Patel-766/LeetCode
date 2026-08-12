class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0;
        int ans=0;
        unordered_map<int,int> mpp;
        for(int r=0;r<n;r++){
            mpp[nums[r]]++;
            if(mpp[nums[r]]>k){
                while(mpp[nums[r]]>k){
                    mpp[nums[l]]--;
                    l++;
                }
            }
            ans=max(ans,(r-l+1));
        }

        return ans;
    }
};