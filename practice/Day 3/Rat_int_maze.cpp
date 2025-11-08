#include <bits\stdc++.h>
using namespace std;

void helper(vector<vector<int>> &arr, vector<vector<bool>> &vis, vector<vector<int>> dir, bool &flag, int row, int col)
{
    int m = arr.size();
    int n = arr[0].size();
    if (row == m - 1 && col == n - 1)
    {
        flag = true;
        return;
    }

    for(int d=0;d<4;d++){
        int newRow=row+dir[d][0];
        int newCol=col+dir[d][1];

        if(newRow>=0 && newCol>=0 && newRow<m && newCol<n && arr[newRow][newCol]==0 && vis[newRow][newCol]){
            vis[newRow][newCol]=false;
            helper(arr, vis, dir, flag, newRow, newCol);
        }
    }
}

bool check(vector<vector<int>> &arr)
{
    int m = arr.size();
    int n = arr[0].size();
    vector<vector<bool>> vis(m, vector<bool>(n, true));
    vector<vector<int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    bool flag = false;
    helper(arr, vis, dir, flag, 0, 0);
    return flag;
}

int main(){
    int m;
    int n;
    cin >> m >> n;
    vector<vector<int>>arr(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }

    cout << check(arr) ;
    return 0;
}