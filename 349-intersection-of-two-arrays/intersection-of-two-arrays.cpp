class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        vector<int> ans2;

        if (nums2.size() < nums1.size()) {
            for (int x : nums2)
                if (find(ans.begin(), ans.end(), x) == ans.end())
                    ans.push_back(x);

            for (int x : ans) {
                if (find(nums1.begin(), nums1.end(), x) != nums1.end())
                    ans2.push_back(x);
            }
        }
        else {
            for (int x : nums1)
                if (find(ans.begin(), ans.end(), x) == ans.end())
                    ans.push_back(x);

            for (int x : ans) {
                if (find(nums2.begin(), nums2.end(), x) != nums2.end())
                    ans2.push_back(x);
            }
        }

        return ans2;
    }
};