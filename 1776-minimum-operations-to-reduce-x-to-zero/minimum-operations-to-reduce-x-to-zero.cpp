class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int s=0;
        for(int i=0;i<n;i++){
            s+=nums[i];
        }
        
        int k=s-x;

        if(k<0) return -1;

        int l=0;
        int ls=-1;
        int sum=0;
        for(int r=0;r<n;r++){
            sum+=nums[r];
            while(sum>k){
                sum-=nums[l];
                l++;
            }
            if(sum==k){
                ls=max(ls,r-l+1);
            }
        }

        if(ls==-1) return -1;

        return n-ls;
    }
};