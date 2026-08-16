class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        int sum=nums[0];
        for(auto val:nums){
            mpp[val]++;
        }

        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                sum+=nums[i];
            }

            else break;
        }

        while(mpp[sum]>0){
            sum++;
        }

        return sum;
    }
};