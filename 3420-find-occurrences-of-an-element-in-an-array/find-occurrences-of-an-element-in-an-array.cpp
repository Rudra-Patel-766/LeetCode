class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        int n=nums.size();
        int m=queries.size();
        vector<int> ans;
        unordered_map<int,vector<int>> mpp;

        for(int i=0;i<n;i++){
            mpp[nums[i]].push_back(i);
        }

        for(int i=0;i<m;i++){
            if(mpp[x].size()>=queries[i]){
                int y=queries[i]-1;
                ans.push_back(mpp[x][y]);
            }
            else{
                ans.push_back(-1);
            }
        }

        return ans;
    }
};