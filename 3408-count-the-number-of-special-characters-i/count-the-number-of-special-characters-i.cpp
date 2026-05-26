class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.length();
        unordered_map<char,int> mpp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if((int)word[j]==(int)word[i]-32){
                    mpp[word[i]]++;
                }
            }
        }

        int specialCount = 0;
        for(auto it:mpp){
            if(it.second>0){
                specialCount++;
            }
        }

        return specialCount;
    }
};