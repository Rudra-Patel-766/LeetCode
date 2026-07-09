class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp;
        for(auto it:s){
            mpp[it]++;
        }

        vector<pair<int,char>> v;
        for(auto val:mpp){
            v.push_back({val.second,val.first});
        }

        sort(v.begin(), v.end(), greater<pair<int, char>>());

        string ans;
        for(auto val:v){
            ans+=string(val.first,val.second);
        }

        return ans;
    }
};