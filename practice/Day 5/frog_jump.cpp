#include<bits\stdc++.h>
using namespace std;


int helper(vector<int>& arr,vector<int>&dp,int k,int idx){
    int n=arr.size();
    if(idx==n-1){
        return 0;
    }
    if(idx>n-1){
        return INT_MAX;
    }
    if(dp[idx]!=-1){
        return dp[idx];
    }
    int temp=INT_MAX;
    for(int i=1;i<=k;i++){
        if(idx+i>n-1){
            break;
        }
        int take=abs(arr[idx]-arr[idx+i])+helper(arr,dp,k,idx+i);
        temp=min(temp,take);
        dp[idx]=temp;
    }
    cout << idx <<" "<<  dp[idx] << endl;
    return dp[idx];
}

int minCost(vector<int>& arr,int k){
    int n=arr.size();
    vector<int>dp(n,-1);
    return helper(arr,dp,k,0);
}

int main(){
    int k;
    cin >> k;
    cout <<"enter size of array:";
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << minCost(arr,k);
    return 0;
}