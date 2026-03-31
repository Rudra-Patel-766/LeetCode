class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        for(int i=0;i<n;i++){
            int scount = 0;
            for(int j=0;j<n;j++){
                if(i==j){
                    continue;
                }
                else{
                    if(s[i] == s[j]){
                        scount++;
                        break;
                    }
                }
            }
            if(scount==0){
                return i;
            }
        }

        return -1;
    }
};