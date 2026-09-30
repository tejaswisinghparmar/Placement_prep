class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        int start = intervals[0][0];
        int end = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {

            if (intervals[i][0] <= end) {
                // Overlap
                end = max(intervals[i][1], end);
            }
            else {
                // No overlap
                ans.push_back({start, end});

                start = intervals[i][0];
                end = intervals[i][1];
            }
        }

        // Add the last interval
        ans.push_back({start, end});

        return ans;
    }
};