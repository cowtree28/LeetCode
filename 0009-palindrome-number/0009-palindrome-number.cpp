class Solution {
public:
    bool isPalindrome(int x) {
        string p = to_string(x);
        for(int i = 0;i<p.size() / 2;i++) 
            if(p[i] != p[p.size() - 1 - i])
                return false;
        return true;
    }
};