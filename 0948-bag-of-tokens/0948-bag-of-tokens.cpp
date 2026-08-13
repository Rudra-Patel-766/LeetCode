class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n=tokens.size();
        int score=0;
        int ans=0;
        sort(tokens.begin(),tokens.end());
        int left=0;
        int right=n-1;
        while(left<=right){
            if(power>=tokens[left]){
                power-=tokens[left];
                score++;
                left++;
            }
            else if(score>0){
                power+=tokens[right];
                score--;
                right--;
            }
            else break;

            ans=max(ans,score);
        }

        return ans;
    }
};