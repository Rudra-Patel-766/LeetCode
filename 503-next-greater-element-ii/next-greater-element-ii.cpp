class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            bool found=false;
            for(int j=i+1;j<2*n;j++){
                if(nums[(j)%n]>nums[i]){
                    ans.push_back(nums[(j)%n]);
                    found=true;
                    break;
                }
            }
            if(!found){
                ans.push_back(-1);
            }
        }

        return ans;
    }
};