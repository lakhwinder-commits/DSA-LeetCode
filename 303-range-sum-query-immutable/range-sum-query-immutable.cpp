class NumArray {
    vector<int> nums;

public:
    NumArray(vector<int>& nums) {
        this->nums = nums;
    }

    int sumRange(int left, int right) {
        int sum = 0;

        while (left <= right) {
            sum += nums[left];
            left++;
        }

        return sum;
    }
};