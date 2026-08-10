class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt=0;
        for(auto val:patterns){
            int n=val.length();
            for(int i=0;i+n<=word.length();i++){
                if(word.substr(i,n)==val){
                    cnt++;
                    break;
                }
            }
        }

        return cnt;
    }
};