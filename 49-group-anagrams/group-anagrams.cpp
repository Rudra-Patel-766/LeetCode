class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        for(auto s:strs){
            string val = s;
            sort(val.begin(),val.end());
            mpp[val].push_back(s);
        }

        vector<vector<string>> ans;
        for(auto s:mpp){
            ans.push_back(s.second);
        }

        return ans;
    }
};