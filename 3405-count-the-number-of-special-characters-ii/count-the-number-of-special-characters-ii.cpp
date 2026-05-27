class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.length();
        
        vector<int> lastLower(26,-1);
        vector<int> firstUpper(26,-1);

        for(int i=0;i<n;i++){
            char ch = word[i];

            if(islower(ch)){
                lastLower[ch-'a'] = i;
            }

            else{
                int j = ch-'A';

                if(firstUpper[j]==-1){
                    firstUpper[j] = i;
                }
            }
        }

        int specialCount = 0;
        for(int i=0;i<26;i++){
            if(lastLower[i]!=-1 && firstUpper[i]!=-1 && lastLower[i]<firstUpper[i]){
                specialCount++;
            }
        }

        return specialCount;
    }
};