#include <bits\stdc++.h>
using namespace std;

class Solution
{
public:

    // map to store vector of char for each n0.
    unordered_map<char, vector<char>> mp;

    void helper(string &digits, vector<string> &ans, string temp, int idx)
    {
        if (idx == digits.size())
        {
            ans.push_back(temp);
        }

        for (char ch : mp[digits[idx]])
        {
            helper(digits, ans, temp + ch, idx + 1);
        }
    }
    vector<string> letterCombinations(string digits)
    {

        mp['2'] = {'a', 'b', 'c'};
        mp['3'] = {'d', 'e', 'f'};
        mp['4'] = {'g', 'h', 'i'};
        mp['5'] = {'j', 'k', 'l'};
        mp['6'] = {'m', 'n', 'o'};
        mp['7'] = {'p', 'q', 'r', 's'};
        mp['8'] = {'t', 'u', 'v'};
        mp['9'] = {'w', 'x', 'y', 'z'};

        vector<string> ans;
        string temp = "";
        helper(digits, ans, temp, 0);
        return ans;
    }

    int main()
    {
        string digits;
        cin >> digits;

        vector<string> result = letterCombinations(digits);
        return 0;
    }
};