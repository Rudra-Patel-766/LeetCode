class Solution {
public:
    char findTheDifference(string s, string t) {
        int l1=s.length();
        int l2=t.length();
        char l;

        unordered_map<char,int> mpp;
        for(auto val:s){
            mpp[val]++;
        }

        for(int i=0;i<l2;i++){
            mpp[t[i]]--;
            if(mpp[t[i]]<0){
                l=t[i];
            }
        }

        return l;
    }
};