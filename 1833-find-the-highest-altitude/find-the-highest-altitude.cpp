class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> alt;
        int height=0;
        for(auto val:gain){
            alt.push_back(height);
            height+=val;
        }

        alt.push_back(height);

        auto max_val = max_element(alt.begin(),alt.end());
        int max_alt = *max_val;

        return max_alt;
    }
};