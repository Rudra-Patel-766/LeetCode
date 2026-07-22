class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l=0;
        int r=0;
        int maxLength = 0;
        int z=0;

        for(int r=0;r<nums.size();r++) {
            if(nums[r]==0){
                z++;
            }

            while(z>k) {
                if(nums[l]==0){
                    z--;
                }
                l++;
            }

            maxLength = max(maxLength, r-l+1);
        }

        return maxLength;
    }
};