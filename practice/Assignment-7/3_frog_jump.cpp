#include<bits\stdc++.h>
using namespace std;

int minCost(vector<int>& height) {
       
        //Recursion+Memoization
        
         int n=height.size();
       
        //tabulation
          vector<int> dp(n, 0);

        dp[0] = 0;  // start at index 0

        if (n >= 2){
            dp[1] = abs(height[1] - height[0]);
        }
        

        for (int i = 2; i < n; i++) {
            int jump1 = dp[i-1] + abs(height[i] - height[i-1]);
            int jump2 = dp[i-2] + abs(height[i] - height[i-2]);
            dp[i] = min(jump1, jump2);
        }

        return dp[n-1];
        
    
    }