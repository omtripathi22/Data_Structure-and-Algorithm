#include<bits\stdc++.h>
using namespace std;
class Solution {
public:
    string helper(string& str1, string& str2, int m, int n,
                  vector<vector<string>>& dp) {
        if (m == 0 && n == 0) {
            return "";
        }
        if (m == 0 || n == 0) {
            return str1.substr(0, m) + str2.substr(0, n);
        }

        if (dp[m][n] != "") {
            return dp[m][n];
        }
        string ans = "";
        if (str1[m - 1] == str2[n - 1]) {
            ans = helper(str1, str2, m - 1, n - 1, dp) + str1[m - 1];
        } else {
            string temp1 = helper(str1, str2, m - 1, n, dp) + str1[m - 1];
            string temp2 = helper(str1, str2, m, n - 1, dp) + str2[n - 1];

            ans = (temp1.size() < temp2.size()) ? temp1 : temp2;
        }
        return dp[m][n] = ans;
    }
    string shortestCommonSupersequence(string str1, string str2) {
        int m = str1.size();
        int n = str2.size();

        // approach-1 Recursion +memoization (storing string in dp)
        //  vector<vector<string>> dp(m + 1, vector<string>(n + 1, ""));
        //  return helper(str1,str2,m,n,dp);

        // Approach-2 Tabulation (storing string in dp)
        //  vector<vector<string>> dp(m + 1, vector<string>(n + 1, ""));
        //  for (int i = 0; i <= m; i++) {
        //      dp[i][0] = str1.substr(0, i);
        //  }

        // for (int i = 1; i <= n; i++) {
        //     dp[0][i] = str2.substr(0, i);
        // }
        // for(int i=1;i<=m;i++){
        //     for(int j=1;j<=n;j++){
        //         if(str1[i-1]==str2[j-1]){
        //             dp[i][j]=dp[i-1][j-1]+str1[i-1];
        //         }
        //         else{
        //             string temp1=dp[i-1][j]+str1[i-1];
        //             string temp2=dp[i][j-1]+str2[j-1];

        //             dp[i][j]=(temp1.size()<temp2.size())?temp1:temp2;
        //         }
        //     }
        // }
        // return dp[m][n];

        // Approach-3 storing length in dp then reconstruction
        vector<vector<int>> dp(m + 1, vector<int>(n + 1));

        for (int i = 0; i <= m; i++) {
            dp[i][0] = i;
        }

        for (int j = 0; j <= n; j++) {
            dp[0][j] = j;
        }

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (str1[i - 1] == str2[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                } else {
                    dp[i][j] = 1 + min(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        string ans = "";
        int i = m, j = n;

        while (i > 0 && j > 0) {
            if (str1[i - 1] == str2[j - 1]) {
                ans.push_back(str1[i - 1]);
                i--, j--;
            } else {
                if (dp[i - 1][j] < dp[i][j - 1]) {
                    ans.push_back(str1[i - 1]);
                    i--;
                } else {
                    ans.push_back(str2[j - 1]);
                    j--;
                }
            }
        }

        // Add remaining characters
        while (i > 0)
            ans.push_back(str1[i-- - 1]);
        while (j > 0)
            ans.push_back(str2[j-- - 1]);

        reverse(ans.begin(), ans.end());
        return ans;
    }
};