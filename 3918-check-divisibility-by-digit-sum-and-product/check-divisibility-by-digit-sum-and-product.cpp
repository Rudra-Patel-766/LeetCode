class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        int sum=0;
        int prod=1;
        while(temp!=0){
            int d=temp%10;
            sum+=d;
            prod*=d;
            temp=temp/10;
        }

        if(n%(sum+prod)==0){
            return true;
        }

        return false;
    }
};