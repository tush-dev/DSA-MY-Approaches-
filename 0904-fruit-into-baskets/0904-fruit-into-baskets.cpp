class Solution {
public:
//tushar 
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mp;
        int i = 0;
        int j = 0;
        int count = 0;
        int n = fruits.size();

        while (j < n) {
            mp[fruits[j]]++;   // include current fruit

            while (mp.size() > 2) {   // shrink if more than 2 types
                mp[fruits[i]]--;
                if (mp[fruits[i]] == 0) {
                    mp.erase(fruits[i]);
                }
                i++;
            }

            count = max(count, j - i + 1);  // update max window
            j++;   // move right pointer
        }

        return count;
    }
};