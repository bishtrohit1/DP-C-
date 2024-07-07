class Solution {
public:
    int lengthOfLIS(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return 0;

        vector<int> dp(n, 1);
        int max_len = 1;

        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (arr[i] > arr[j]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            max_len = max(max_len, dp[i]);
        }

        return max_len;
    }
};
