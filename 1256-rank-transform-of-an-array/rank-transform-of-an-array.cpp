class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> temp = arr;
        unordered_set<int> vis;
        vector<int> ans;

        sort(temp.begin(),temp.end());

        unordered_map<int,int> mpp;
        int i=0;
        int j=0;
        while(i<n){
            if(!vis.count(temp[i])){
                mpp[temp[i]] = j+1;
                vis.insert(temp[i]);
                j++;
            }
            i++;
        }

        for(int i=0;i<n;i++){
            ans.push_back(mpp[arr[i]]);
        }

        return ans;
    }
};