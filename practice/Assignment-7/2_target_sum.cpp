#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    int helper(vector<int>& nums, vector<vector<int>>& dp, int target,
               int idx) {
        if (target < -1000 || target > 1000) {
            return 0;
        }

        if (idx == nums.size()) {
            if (target == 0) {
                return 1;
            }
            return 0;
        }

        int j = target + 1000;
        if (dp[idx][j] != INT_MIN) {
            return dp[idx][j];
        }
        // add
        int add = helper(nums, dp, target - nums[idx], idx + 1);

        // sub
        int sub = helper(nums, dp, target + nums[idx], idx + 1);

        return dp[idx][j] = add + sub;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(2001, INT_MIN));
        return helper(nums, dp, target, 0);
    }
};