class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLength = 0;

        for(int i=0;i<n;i++){
            vector<int> vis(256,0);
            for(int j=i;j<n;j++){
                if(vis[s[j]]==1){
                    break;
                }

                vis[s[j]] = 1;

                int len = j-i+1;

                maxLength = max(maxLength,len);
            }
        }

        return maxLength;
    }
};