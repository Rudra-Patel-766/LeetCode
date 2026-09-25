class Solution {
public:
    int sumofdigits(int n){
        int s=0;
        while(n!=0){
            int d=n%10;
            s+=d;
            n/=10;
        }

        return s;
    }

    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        int minIndex=INT_MAX;
        for(int i=0;i<n;i++){
            int s=sumofdigits(nums[i]);
            if(s==i){
                minIndex=min(minIndex,i);
            }
        }   
        if(minIndex==INT_MAX) return -1;

        return minIndex; 
    }
};