class Solution {
public:
    bool checkDivisibility(int n) {
        int l = 0,m=1;
        int org = n;

        while (org != 0) {
            l += org % 10;
            m*=org%10;
            org /= 10;
        }

        return n % (l+m) == 0;
    }
};