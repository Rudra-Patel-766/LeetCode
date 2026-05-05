class Solution {
public:
    bool rotateString(string s, string goal) {
        int m = s.length();
        int n = goal.length();

        if(s==goal){
            return true;
        }

        for(int i=0;i<m;i++){
            reverse(s.begin(),s.end());
            reverse(s.begin(),s.end()-1);

            if(s==goal){
                return true;
            }
        }

        return false;
    }
};