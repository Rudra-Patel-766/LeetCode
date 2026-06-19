class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int height=0;
        int max_alt=0;

        for(auto val:gain){
            height+=val;
            max_alt=max(max_alt,height);
        }

        return max_alt;
    }
};