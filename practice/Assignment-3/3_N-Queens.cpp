#include <bits\stdc++.h>
using namespace std;

class Solution
{
public:
    void solution(vector<vector<char>> board, int n, vector<vector<string>> &ans)
    {
        vector<string> temp;
        for (int i = 0; i < n; i++)
        {
            string output = "";
            for (int j = 0; j < n; j++)
            {
                output.push_back(board[i][j]);
            }
            temp.push_back(output);
        }
        ans.push_back(temp);
    }
    bool isSafe(int row, int col, vector<vector<char>> board, int n)
    {
        int i = row;
        int j = col;
        while (j >= 0)
        {
            if (board[i][j] == 'Q')
            {
                return false;
            }
            j--;
        }
        i = row;
        j = col;
        while (i >= 0 && j >= 0)
        {
            if (board[i][j] == 'Q')
            {
                return false;
            }
            i--;
            j--;
        }
        i = row;
        j = col;
        while (i < n && j >= 0)
        {
            if (board[i][j] == 'Q')
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    void solve(vector<vector<char>> board, int col, int n, vector<vector<string>> &ans)
    {
        if (col >= n)
        {
            solution(board, n, ans);
            return;
        }
        for (int row = 0; row < n; row++)
        {
            if (isSafe(row, col, board, n))
            {
                board[row][col] = 'Q';
                solve(board, col + 1, n, ans);
                board[row][col] = '.';
            }
        }
    }
    int totalNQueens(int n)
    {
        int col = 0;
        vector<vector<char>> board(n, vector<char>(n, '.'));
        vector<vector<string>> ans;
        solve(board, col, n, ans);
        return ans.size();
    }
};