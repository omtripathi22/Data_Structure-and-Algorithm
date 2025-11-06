#include <bits\stdc++.h>
using namespace std;

class Solution {
public:

    void helper(vector<vector<int>>& ans,vector<int>& temp,int& n, int& k,int idx){
        //base case
        if(temp.size()==k){
            ans.push_back(temp);  //storing temp array
            return;
        }
        for(int i=idx;i<=n;i++){
            temp.push_back(i);
            helper(ans,temp,n,k,i+1);
            temp.pop_back(); //backtrack
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>temp;
        helper(ans,temp,n,k,1);
        return ans;
    }
};
