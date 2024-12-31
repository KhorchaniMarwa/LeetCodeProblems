class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        char right = 0;
        char left = str.length() - 1;
        while (right <= left) {
            if (str[right] != str[left]) {
                return false;
                
            } else {
                right += 1;
                left -= 1;
            }
        }
        return true;
    }
};
