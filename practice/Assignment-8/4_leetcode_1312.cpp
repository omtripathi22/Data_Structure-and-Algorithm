#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    int helper(string& s,string& t,int m,int n,vector<vector<int>>& dp){
        if(m==0 || n==0){
            return 0;
        }
        
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        int num=0;
        if(s[m-1]==t[n-1]){
            num=1+helper(s,t,m-1,n-1,dp);
        }
        else{
            num=max(helper(s,t,m-1,n,dp),helper(s,t,m,n-1,dp));
        }
        return dp[m][n]=num;
    }
    int minInsertions(string s) {
        string t=s;
        reverse(s.begin(),s.end());
        int m=s.size();
        vector<vector<int>>dp(m+1,vector<int>(m+1,-1));
        int LCS=helper(s,t,m,m,dp);
        return m-LCS;
    }
};