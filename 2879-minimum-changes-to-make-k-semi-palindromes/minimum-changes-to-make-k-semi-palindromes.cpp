class Solution {
public:
    int minimumChanges(string s, int k) {
        int n = s.size();

        vector<vector<int>> cost(n, vector<int>(n, 1e9));

        // Step 1: Precompute cost of making each substring semi-palindrome
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                int len = j - i + 1;

                for (int d = 1; d < len; d++) {

                    if (len % d != 0) continue;

                    int changes = 0;

                    // Divide into groups based on modulo d
                    for (int r = 0; r < d; r++) {

                        int l = i + r;
                        int h = i + r + ((len - 1 - r) / d) * d;

                        while (l < h) {
                            if (s[l] != s[h]) {
                                changes++;
                            }

                            l += d;
                            h -= d;
                        }
                    }

                    cost[i][j] = min(cost[i][j], changes);
                }
            }
        }

        // Step 2: DP
        vector<vector<int>> dp(n + 1, vector<int>(k + 1, 1e9));

        dp[0][0] = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= k; j++) {

                for (int p = 0; p < i; p++) {

                    if (dp[p][j - 1] == 1e9) continue;
                    if (cost[p][i - 1] == 1e9) continue;

                    dp[i][j] = min(
                        dp[i][j],
                        dp[p][j - 1] + cost[p][i - 1]
                    );
                }
            }
        }

        return dp[n][k];
    }
};