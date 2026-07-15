class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int SumOdd = 0;
        int SumEven = 0;

        for(int i=1;i<=(2*n);i++){
            if(i%2==0){
                SumEven+=i;
            }

            else{
                SumOdd+=i;
            }
        }

        return gcd(SumOdd,SumEven);
    }
};