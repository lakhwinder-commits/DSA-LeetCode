class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int mn = INT_MAX;
        int mx = INT_MIN;
        int minIdx = -1;
        int maxIdx = -1;

        for (int i = 0; i < n; i++) {
            if (nums[i] < mn) {
                mn = nums[i];
                minIdx = i;
            }

            if (nums[i] > mx) {
                mx = nums[i];
                maxIdx = i;
            }
        }

        int front = max(minIdx, maxIdx) + 1;
        int back = n - min(minIdx, maxIdx);
        int both = min(minIdx, maxIdx) + 1
                 + n - max(minIdx, maxIdx);

        return min({front, back, both});
    }
};