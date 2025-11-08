#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string& str) {
        int i = 0;
        int j = str.size() - 1;
        while (i < j) {
            if (str[i] != str[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    void helper(vector<vector<string>>& ans, vector<string>& temp, string& s,
                int idx) {
        if (s.size() == idx) {
            ans.push_back(temp);
            return;
        }

        string str = "";
        for (int i = idx; i < s.size(); i++) {
            str += s[i];
            if (isPalindrome(str)) {
                temp.push_back(str);
                helper(ans, temp, s, i + 1);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        helper(ans, temp, s, 0);
        return ans;
    }
};