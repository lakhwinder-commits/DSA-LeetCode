class Solution {
public:
    int largestInteger(int n, int s) {
        vector<int> num;

        while (s > 9) {
            num.push_back(9);
            s -= 9;
        }
        num.push_back(s);

        if (n < num.size())
            return -1;

        while (num.size() < n) {
            num.push_back(0);
        }

        int ans = 0;
        for (int digit : num) {
            ans = ans * 10 + digit;
        }

        return ans;
    }
};