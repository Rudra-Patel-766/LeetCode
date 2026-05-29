class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        for(int i=0;i<n;i++){
            int s=0;
            while(nums[i]!=0){
                int r = nums[i]%10;
                s+=r;
                nums[i]=nums[i]/10;
            }
            ans.push_back(s);
        }

        int min = *min_element(ans.begin(),ans.end());

        return min;
    }
};