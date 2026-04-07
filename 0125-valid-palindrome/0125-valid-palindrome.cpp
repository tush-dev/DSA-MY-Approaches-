class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;  // Fix: was missing -1

        while (i < j)
        {
            char l = s[i];   // Fix: s.charAt() → s[]
            char r = s[j];   // Fix: s.charAt() → s[]

            if (!isalnum(l)) {   // Fix: Character.isLetterOrDigit() → isalnum()
                i++;
                continue;
            }
            if (!isalnum(r)) {   // Fix: Character.isLetterOrDigit() → isalnum()
                j--;
                continue;
            }

            if (tolower(l) != tolower(r))  // Fix: tolower(r)!=tolower(r) → tolower(l)!=tolower(r)
                return false;

            i++;  // Fix: was missing
            j--;  // Fix: was missing
        }
        return true;
    }
};