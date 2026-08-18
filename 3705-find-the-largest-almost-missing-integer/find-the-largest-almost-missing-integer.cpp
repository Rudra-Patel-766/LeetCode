class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        vector<int> ans;

        if (k==n) {
            return *max_element(nums.begin(), nums.end());
        }

        for(int i=0;i<=(n-k);i++){
            for(int j=i;j<i+k;j++){
                mpp[nums[j]]++;
            }
        }

        int cnt=0;
        for(auto val:mpp){
            if(val.second==1){
                ans.push_back(val.first);
                cnt++;
            }
        }

        sort(ans.begin(),ans.end());

        if(cnt!=0){
            return ans[ans.size()-1];
        }

        return -1;
    }
};