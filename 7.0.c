//��������ȫ���������� 
class Solution {
public:
    bool isScramble(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        if(n != m) {
            return false;
        }
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(n + 1, 0)));
 
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                dp[i][j][1] = (s1[i] == s2[j]);
            }
        }
 
        for(int len = 2; len <= n; len++) {
            for(int i = 0; i <= n - len; i++) {
                for(int j = 0; j <= n - len; j++) {
                    for(int k = 1; k <= len - 1; k++) {
                        if(dp[i][j][k] && dp[i + k][j + k][len - k]) {
                            dp[i][j][len] = true;
                            break;
                        }
                        if (dp[i][j + len - k][k] && dp[i + k][j][len - k]) {
                            dp[i][j][len] = true;
                            break;
                        }
                    }
                }
            }
        }
        return dp[0][0][n];
    }
};