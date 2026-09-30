class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> freq;

        int ans = 0;
        int count = 0;
        int left = 0;

        for(int right = 0; right < s.size(); right++) {

            if(freq[s[right]] == 0) {
                freq[s[right]]++;
                count++;
                ans = max(count, ans);
            }
            else {
                while(freq[s[right]] > 0) {
                    freq[s[left]]--;
                    left++;
                    count--;
                }

                freq[s[right]]++;
                count++;
            }
        }

        return ans;
    }
};