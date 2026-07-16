class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        int max_element = 0;
        vector<int> mx;
        vector<int> prefixGcd;

        for(int i=0;i<n;i++){
            max_element = max(max_element,nums[i]);
            mx.push_back(max_element);
            prefixGcd.push_back(gcd(nums[i],mx[i]));
        }

        sort(prefixGcd.begin(),prefixGcd.end());

        long long sum = 0;
        for(int i=0;i<n/2;i++){
            sum+=gcd(prefixGcd[i],prefixGcd[n-i-1]);
        }

        return sum;
    }
};