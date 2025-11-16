#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    int helper(string& s, string& t, int m, int n, vector<vector<int>>& dp) {
        if (m < n) {
            return 0;
        }
        if (n == 0) {
            return 1;
        }
        
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        int num = 0;
        if (s[m - 1] != t[n - 1]) {
            num = helper(s, t, m - 1, n, dp);
        } else {
            num = helper(s, t, m - 1, n - 1, dp) + helper(s, t, m - 1, n, dp);
            
        }
        return dp[m][n]=num;
    }
    int numDistinct(string s, string t) {
        int m = s.size();
        int n = t.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
        return helper(s, t, m, n, dp);
    }
};