class Solution {
public:
    int stoneGameVIII(vector<int>& stones) {
        int n = stones.size();

        long long sum = 0;
        for (int x : stones)
            sum += x;

        long long best = sum;

        // Work backwards from n-1
        for (int i = n - 2; i >= 1; --i) {
            sum -= stones[i + 1];
            best = max(best, sum - best);
        }

        return best;
    }
};