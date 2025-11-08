#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    void helper(vector<vector<int>>& ans, vector<int>& nums,
                int idx) {
        if (idx == nums.size()) {
            ans.push_back(nums);
            return;
        }
        
        set<int> vis;
        for (int i = idx; i < nums.size(); i++) {
            if (!vis.count(nums[i])) {
                vis.insert(nums[i]);
                swap(nums[idx], nums[i]);
                helper(ans, nums, idx + 1);
                swap(nums[idx], nums[i]);

            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        helper(ans, nums, 0);
        return ans;
    }
};