class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                ans.push_back(abs(i - start));
            }
        }

        return *min_element(ans.begin(), ans.end());
    }
};