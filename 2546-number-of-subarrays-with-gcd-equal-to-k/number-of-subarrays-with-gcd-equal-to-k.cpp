class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            int currGcd=0;
            if(nums[i]%k==0){
                for(int j=i;j<n;j++){
                    currGcd = gcd(currGcd,nums[j]);
                    if(currGcd==k){
                        count++;
                    }
                }
            }
        }

        return count;
    }
};