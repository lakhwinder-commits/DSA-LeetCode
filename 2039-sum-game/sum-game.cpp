class Solution {
public:
    bool sumGame(string num) {

        int leftSum = 0, rightSum = 0;
        int leftQ = 0, rightQ = 0;

        for(int i = 0; i < num.size()/2; i++) {
            if(num[i] == '?')
                leftQ++;
            else
                leftSum += num[i] - '0';
        }

        for(int i = num.size()/2; i < num.size(); i++) {
            if(num[i] == '?')
                rightQ++;
            else
                rightSum += num[i] - '0';
        }

        int qDiff = leftQ - rightQ;
        int sumDiff = leftSum - rightSum;

        if(qDiff == 0)
            return sumDiff != 0;

        if(abs(qDiff) % 2 == 1)
            return true;

        return sumDiff != -(qDiff / 2) * 9;
    }
};