class Solution {
public:
    int rotatedDigits(int n) {
        int count = 0;

        for(int i=1;i<=n;i++){
            int t = i;
            bool valid = true;
            bool changed = false;

            while(t>0){
                int x = t%10;

                if(x==3 || x==4 || x==7){
                    valid = false;
                    break;
                }

                if(x==2 || x==5 || x==6 || x==9){
                    changed = true;
                }

                t=t/10;
            }

            if(valid && changed){
                count++;
            }
        }
        
        return count;
    }
};