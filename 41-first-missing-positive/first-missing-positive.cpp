class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,bool> mpp;
        for(auto it:nums){
            mpp[it]=true;
        }

        for(int i=1;i<=n;i++){
            if(!mpp[i]){
                return i;
            }
        }

        return n+1;
    }
};