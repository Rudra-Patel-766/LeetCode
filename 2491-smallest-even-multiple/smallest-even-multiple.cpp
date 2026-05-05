class Solution {
public:
    int smallestEvenMultiple(int n) {
        int ans = 1;
        while(true){
            if(ans%n==0 && ans%2==0){
                return ans;
            }

            ans++;
        }
    }
};