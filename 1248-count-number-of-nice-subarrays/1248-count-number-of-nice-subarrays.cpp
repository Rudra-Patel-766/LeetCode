class Solution {
public:

    int niceSubarrays(vector<int>& nums, int k){
        int n=nums.size();
        int count=0;
        int l=0;
        int oddCount=0;
        for(int r=0;r<n;r++){
            if(nums[r]%2!=0){
                oddCount++;
            }
            while(oddCount>k){
                if(nums[l]%2!=0){
                    oddCount--;
                }
                l++;
            }
            count+=(r-l+1);
        }

        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        int a=niceSubarrays(nums,k);
        int b=niceSubarrays(nums,k-1);

        return a-b;
    }
};