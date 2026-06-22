class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int alpha[26] = {0};
        for(char t: text)
            alpha[t - 'a']++;
        return min({alpha[1], alpha[0], alpha[14] / 2, alpha[13], alpha[11] / 2});
    }
};