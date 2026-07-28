class Solution {
public:
    string smallestPalindrome(string s) {
        map<char, int> mp;

        for (char c : s)
            mp[c]++;

        deque<char> ans;
        string mid = "";

        
        for (auto p = mp.begin(); p != mp.end(); p++) {

            while (p->second >= 2) {
                ans.push_back(p->first);
                p->second -= 2;
            }

            if (p->second == 1)
                mid.push_back(p->first);
        }

        string left;
        for (char c : ans)
            left.push_back(c);

        string right = left;
        reverse(right.begin(), right.end());

        return left + mid + right;
    }
};