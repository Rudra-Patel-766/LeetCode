class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int n = s1.length();

        for(int i=0;i<n;i++){
            if(s1==s2){
                return true;
            }

            else if(s1[i]!=s2[i]){
                swap(s1[i],s1[i+2]);
            }
        }

        return false;
    }
};