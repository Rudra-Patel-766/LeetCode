class Solution {
public:
    string toLowerCase(string s) {
        for(auto &val:s){
            val=tolower(val);
        }

        return s;
    }
};