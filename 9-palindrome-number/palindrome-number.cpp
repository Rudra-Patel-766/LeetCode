class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long long int rev=0;
        int digit;

        if(x<0){
            return false;
        }

        while(temp!=0){
            digit = temp%10;
            rev = rev*10+digit;
            temp = temp/10;
        }

        return x == rev;
    }
};