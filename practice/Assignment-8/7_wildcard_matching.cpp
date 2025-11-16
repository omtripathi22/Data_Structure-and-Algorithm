#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    bool helper(string& s, string& p,int m,int n,vector<vector<int>>&dp){
        if(m==0 && n==0){
            return true;
        }
        if(m==0 && n>0){
            while(n>0 && p[n-1]=='*'){
                n--;
            }
            if(n==0){
                return true;
            }
            return false;
        }

        if(m>0 && n==0){
            return false;
        }

        if(dp[m][n]!=-1){
            return dp[m][n];
        }

        if(s[m-1]==p[n-1]){
            return dp[m][n]=helper(s,p,m-1,n-1,dp);
        }
        else if(p[n-1]=='?'){
            return dp[m][n]=helper(s,p,m-1,n-1,dp);
        }
        else if(p[n-1]=='*'){
            bool case1=helper(s,p,m,n-1,dp);
            bool case2=helper(s,p,m-1,n,dp);

            return dp[m][n]=(case1 || case2);
        }
        return dp[m][n]=false;
    }
    bool isMatch(string s, string p) {
        int m=s.size();
        int n=p.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return helper(s,p,m,n,dp);

    }
};