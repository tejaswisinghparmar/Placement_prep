class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> ms;
        unordered_map<char, int> mt;

        for (char i : s) {
            ms[i]++;
        }
        for (char i : t) {
            mt[i]++;
        }

        for (char i : s) {
            if (ms[i] != mt[i]) {
                return false;
            }
        }
        for (char i : t) {
            if (ms[i] != mt[i]) {
                return false;
            }
        }
        return true;
    }
};