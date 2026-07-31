class Solution {
public:
    int minimumPushes(string word) {
        int x = word.size();
         int ans;
        if (x<=8)return x;
        else if (x<=16&&x>8)
        {
             ans = 8+((x-8)*2);
        }else if (x<=24&&x>16){
             ans = 24+((x-16)*3);
        }else {
            ans =48+((x-24)*4);
        }
        return ans;
    }
};