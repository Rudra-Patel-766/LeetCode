class Solution {
public:
    int maxProduct(int n) {
        int mp=0;
        vector<int> digits;
        while(n!=0){
            int d=n%10;
            digits.push_back(d);
            n=n/10;
        }

        int s=digits.size();
        for(int i=0;i<s-1;i++){
            for(int j=i+1;j<s;j++){
                mp=max(mp,(digits[i]*digits[j]));
            }
        }

        return mp;
    }
};