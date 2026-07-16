class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        int max_element = nums[0];
        vector<int> prefixGcd;

        for(int i=0;i<n;i++){
            if(nums[i]>max_element) max_element = nums[i];
            prefixGcd.push_back(gcd(nums[i],max_element));
        }

        sort(prefixGcd.begin(),prefixGcd.end());

        long long sum = 0;
        for(int i=0;i<n/2;i++){
            sum+=gcd(prefixGcd[i],prefixGcd[n-i-1]);
        }

        return sum;
    }
};