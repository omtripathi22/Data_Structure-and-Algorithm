#include<bits\stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to delete middle element of a stack.
    void helper(stack<int>& s,int idx){
        if(idx==1){
            s.pop();
            return;
        }
        int val=s.top();
        s.pop();
        helper(s,idx-1);
        s.push(val);
    }
    void deleteMid(stack<int>& s) {
        // code here..
        int idx=(s.size()/2 )+1;
        helper(s,idx);
    }
};