class Solution {
public:
    bool palindrom(string s, int i, int j){
        for(i, j; i < j; i++, j--){
            if(s[i] != s[j])
                return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        for(int i = 0, j = s.size() - 1; i < j; i++, j--){
            if(s[i] != s[j])
                return palindrom(s, i, j-1) || palindrom(s, i+1, j);
        }
        return true;
    }
};