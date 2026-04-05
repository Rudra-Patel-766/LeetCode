class Solution {
public:
    bool judgeCircle(string moves) {
        int n = moves.length();

        int countU = 0;
        int countD = 0;
        int countR = 0;
        int countL = 0;

        for(int i=0;i<n;i++){
            if(moves[i]=='U'){
                countU++;
            }

            else if(moves[i]=='D'){
                countD++;
            }

            else if(moves[i]=='R'){
                countR++;
            }

            else{
                countL++;
            }
        }

        if(countU==countD && countR==countL){
            return true;
        }

        return false;
    }
};