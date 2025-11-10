#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int row, int col, char ch) {
        
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == ch ) {
                return false;
            }
            if (board[i][col] == ch ) {
                return false;
            }
            if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == ch 
               ) {
                return false;
            }
        }
       
        return true;
    }
    bool helper(vector<vector<char>>& board) {
        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                if (board[row][col] == '.') {
                    for (int i = 1; i <= 9; i++) {
                        char ch = i + '0';
                        if (isSafe(board, row, col, ch)) {
                            board[row][col] = ch;
                            if (helper(board)) {
                                return true;
                            } else {
                                board[row][col] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) { helper(board); }
};