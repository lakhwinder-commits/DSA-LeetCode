class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        int left = 0, ones = 0;
        string ans = "";

        for (int right = 0; right < n; right++) {
            if (s[right] == '1')
                ones++;

            while (ones > k) {
                if (s[left] == '1')
                    ones--;
                left++;
            }

            if (ones == k) {
                // Remove leading zeroes: makes substring shortest
                int l = left;
                while (l <= right && s[l] == '0')
                    l++;

                string cur = s.substr(l, right - l + 1);

                if (ans == "" || cur.size() < ans.size() ||
                    (cur.size() == ans.size() && cur < ans)) {
                    ans = cur;
                }
            }
        }

        return ans;
    }
};