#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int bfs(vector<vector<char>>&grid,int& m,int& n,int row,int col){
    vector<vector<bool>>vis(m,vector<bool>(n,0));
    queue<pair<int,int>>q;
    vector<vector<int>>dir={{1,0},{0,1},{-1,0},{0,-1}};

    vis[row][col]=true;
    q.push({row,col});
    int len=0;
    while(!q.empty()){
        int size=q.size();
        for(int k=0;k<size;k++){
            auto p=q.front();
            q.pop();
            int i=p.first;
            int j=p.second;
            for(int d=0;d<4;d++){
                int newRow=i+dir[d][0];
                int newCol=j+dir[d][1];

                if(newRow<0 || newCol<0 || newRow>=m || newCol>=n){
                    continue;
                }
                if(grid[newRow][newCol]=='.' && !vis[newRow][newCol]){
                    q.push({newRow,newCol});
                    vis[newRow][newCol]=true;
                }
                if(grid[newRow][newCol]=='B'){
                    len++;
                    return len;
                }
            }
        }
        len++;
    }
    return len;
}



int main()
{
    int n, m;
    cin >> m >> n;
    vector<vector<char>> grid(m, vector<char>(n));
    //vector<vector<bool>> vis(m, vector<bool>(n, 0));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    // cout << "hii";
    string str = "";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 'A')
            {
                int len=bfs(grid,m,n,i,j);
                cout << len;
            }
        }
    }
    
    return 0;
}

//test case 
// 5 8
// # # # # # # # #
// # . A # . . . #
// # . # # . # B #
// # . . . . . . #
// # # # # # # # #
