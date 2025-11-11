#include<bits\stdc++.h>
using namespace std;

long long helper(vector<long long>& nums,vector<long long>&dp,int idx){
    int m=nums.size();
    while(idx<m && nums[idx]==0){
        idx++;
    }
    if(idx>=m){
        return 0;
    }
    if(dp[idx]!=-1){
        return dp[idx];
    }
    long long take=(long long)nums[idx]*idx+helper(nums,dp,idx+2);
    long long skip=helper(nums,dp,idx+1);
    return dp[idx]=max(take,skip);
}

long long points(vector<int>& arr){
    int n=arr.size();
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
    }

    vector<long long>nums(maxi+1,0);
    for(int i=0;i<n;i++){
        nums[arr[i]]++;
    }
    vector<long long>dp(maxi+1,-1);
    // vector<int>dp(n,-1);
    return helper(nums,dp,mini);
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
