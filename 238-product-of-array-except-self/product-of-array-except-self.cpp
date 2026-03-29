class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        int multi=1;
        int Zcount=0;

        for(int i=0;i<n;i++){
            if(nums[i]==0){
                Zcount++;
            }

            else{
                multi = multi*nums[i];
            }
        }
        
        for(int j=0;j<n;j++){
            if(Zcount > 1){
                result.push_back(0);
            }

            else if(Zcount == 1){
                if(nums[j]==0){
                    result.push_back(multi);
                }

                else{
                    result.push_back(0);
                }
            }

            else{
                result.push_back(multi/nums[j]);
            }
        }

        return result;
    }
};