class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        long long x = 0;
        long sum = 0;

        for(auto val:s){
            if(val!='0'){
                int d = val-'0';
                x = x*10+d;
                sum+=d;
            }
        }

        return x*sum;
    }
};