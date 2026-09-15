class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(auto it:nums){
            mpp[it]++;
        }

        // sort(nums.begin(),nums.end());
        int i=k;
        while(true){
            if(i%k==0 && mpp[i]==0){
                break;
            }
            i++;
        }

        return i;
    }
};