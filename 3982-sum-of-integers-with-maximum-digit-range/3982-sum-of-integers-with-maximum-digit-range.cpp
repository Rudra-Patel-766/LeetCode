class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int MaxRange=0;
        vector<int> dr;
        int ans=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            int k=nums[i];
            int l=INT_MIN;
            int s=INT_MAX;
            while(k!=0){
                int d=k%10;
                l=max(l,d);
                s=min(s,d);
                k=k/10;
            }
            dr.push_back((l-s));

            MaxRange = max(MaxRange,(l-s));
        }

        for(int i=0;i<n;i++){
            if(dr[i]==MaxRange){
                ans+=nums[i];
            }
        }

        return ans;

    }
};