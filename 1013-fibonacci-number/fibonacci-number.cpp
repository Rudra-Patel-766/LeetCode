class Solution {
public:
    int fib(int n) {
        int a = 0;
        int b = 1;

        if (n == a) {
            return 0;
        }

        else if (n == b) {
            return 1;
        }

        int temp;
        for (int i = 1; i < n; i++) {
            temp = a + b;
            a = b;
            b = temp;
        }

        return temp;
    }
};