class Solution {
public:

    bool isValid(char ch) {
        if((ch >= 'a' && ch <= 'z') ||
           (ch >= 'A' && ch <= 'Z') ||
           (ch >= '0' && ch <= '9')) {
            return true;
        }
        return false;
    }

    string toLower(string s) {

        string lower = "";

        for(int i = 0; i < s.length(); i++) {

            char ch = s[i];

            if(ch >= 'A' && ch <= 'Z') {
                ch = ch - 'A' + 'a';
            }

            lower += ch;
        }

        return lower;
    }

    bool isPalindrome(string s) {

        int i = 0;
        int j = s.length() - 1;

        string str = toLower(s);

        while(i < j) {

            while(i < j && isValid(str[i]) == false) {
                i++;
            }

            while(i < j && isValid(str[j]) == false) {
                j--;
            }

            if(str[i] != str[j]) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};