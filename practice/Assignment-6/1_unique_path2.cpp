#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    int solve(vector<vector<int>>& obstacleGrid, vector<vector<int>>& dp,
              int sr, int sc, int er, int ec) {
        if (sr == er && sc == ec) {
            return 1;
        }
        if (sr > er || sc > ec) {
            return 0;
        }
        if (dp[sr][sc] != -1) {
            return dp[sr][sc];
        }
        if (obstacleGrid[sr][sc] == 1) {
            return 0;
        }
        return dp[sr][sc] = solve(obstacleGrid, dp, sr + 1, sc, er, ec) +
                            solve(obstacleGrid, dp, sr, sc + 1, er, ec);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        if(obstacleGrid[m-1][n-1]==1){
            return 0;
        }
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return solve(obstacleGrid, dp, 0, 0, m - 1, n - 1);
    }
};