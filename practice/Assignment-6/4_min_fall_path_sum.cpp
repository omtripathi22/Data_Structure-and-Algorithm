#include<bits\stdc++.h>
using namespace std;

class Solution {
    int n;

public:
    int helper(vector<vector<int>>& grid, vector<vector<int>>& dp, int row,
               int col) {
        if (row == n - 1) {
            return grid[row][col];
        }

        if (dp[row][col] != INT_MAX) {
            return dp[row][col];
        }
        int mini = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (i == col) {
                continue;
            }
            mini = min(mini, grid[row][col] + helper(grid, dp, row + 1, i));
        }
        return dp[row][col] = mini;
    }
    int minFallingPathSum(vector<vector<int>>& grid) {
        n = grid.size();
        int num = INT_MAX;
        vector<vector<int>> dp(n, vector<int>(n, INT_MAX));
        for (int i = 0; i < n; i++) {
            num = min(num, helper(grid, dp, 0, i));
        }
        return num;
    }
};