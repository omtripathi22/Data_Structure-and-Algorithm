#include<iostream>
#include<vector>
using namespace std;
void printArray(int m, int n,vector<vector<int>>arr)
{
     for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
}
void inputArray(int m, int n, vector<vector<int>>arr)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
}
int main()
{
  int m,n;
  cout << "Enter the no. of rows:";
  cin >> m;
  cout << "Enter the no. of columns:";
  cin >> n;
  vector<vector<int>>arr;
  inputArray(m,n,arr);
  
  printArray(m,n,arr);
}   