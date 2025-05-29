class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_set<char> unique;
        int l = 0;
        int maxLength = 0;

        for (int r = 0; r < s.length(); r ++) {
            while (unique.find(s[r]) != unique.end()) {
                unique.erase(s[l]);
                l++;
            }

            unique.insert(s[r]);

            maxLength = std::max(maxLength, r - l + 1);
        }
        return maxLength;
    }
};
