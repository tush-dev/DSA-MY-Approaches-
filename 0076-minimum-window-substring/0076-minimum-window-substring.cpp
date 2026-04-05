class Solution {
public:
    string minWindow(string s, string t) {
        
        unordered_map<char,int> mp;

        // Step 1: Store frequency of t
        for(char c : t) {
            mp[c]++;
        }

        int i = 0, j = 0;
        int count = mp.size();   // number of unique chars to match
        int minLen = INT_MAX;
        int start = 0;           // starting index of answer

        while(j < s.length()) {

            // Step 2: Acquire character
            if(mp.find(s[j]) != mp.end()) {
                mp[s[j]]--;

                if(mp[s[j]] == 0)
                    count--;   // one character fully matched
            }

            // Step 3: When all matched → try shrinking
            while(count == 0) {

                // update answer
                if(j - i + 1 < minLen) {
                    minLen = j - i + 1;
                    start = i;
                }

                // release character
                if(mp.find(s[i]) != mp.end()) {
                    mp[s[i]]++;

                    if(mp[s[i]] > 0)
                        count++;   // window invalid again
                }

                i++; // shrink window
            }

            j++; // expand window
        }

        // Step 4: return result
        if(minLen == INT_MAX)
            return "";

        return s.substr(start, minLen);
    }
};