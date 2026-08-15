class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int val=0;
        for(int i=0;i<n;i++){
            val^=nums[i];
        }

        if(val!=0) return n;

        for(int j=0;j<n;j++){
            if(nums[j]!=0){
                return n-1;
            }
        }

        return 0;
    }
};