#include<bits\stdc++.h>
using namespace std;

int helper(vector<int>& arr,vector<int>& dp,int idx){
    int n=arr.size();
    if(idx>=n){
       return 0;
    }
    if(dp[idx]!=-1){
        return dp[idx];
    }

    int take=arr[idx]+helper(arr,dp,idx+2);
    int skip=helper(arr,dp,idx+1);

    return dp[idx]=max(take,skip);
}

int points(vector<int>& arr){
    int n=arr.size();
    vector<int>dp(n,-1);
    return helper(arr,dp,0);
}

int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << points(arr);
    return 0;
}