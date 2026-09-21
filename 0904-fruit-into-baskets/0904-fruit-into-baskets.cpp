class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int l=0;
        int maxFruits=0;
        unordered_map<int,int> mpp;

        for(int r=0;r<n;r++){
            mpp[fruits[r]]++;
            if(mpp.size()>2){
                mpp[fruits[l]]--;
                if(mpp[fruits[l]]==0){
                    mpp.erase(fruits[l]);
                }
                l++;
            }

            if(mpp.size()<=2){
                maxFruits=max(maxFruits,r-l+1);
            }
        }

        return maxFruits;
    }
};