#include<iostream>
using namespace std;
int main()
{ 
    //  int n;
    // cout << "enter value of n" << endl ;
    // cin >> n ;
    // for(int k=0;k<n;k++)
    // {
    //     for(int j=0;j<k+1;j++)
    //     {
    //         cout << "*";
    //     }
    //     for(int j=2*n-2*k-1;j>0;j=j-1)
    //     {
    //         cout << " ";
    //     }
    //      for(int j=0;j<k+1;j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
     int row;
    cout << "enter no. of rows:" << endl;
    cin >> row;
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout << " " ;
        }
        for(int j=0;j<2*row-2*j-1;j++)
        {
            if(j==0||j==2*row-2*i-2)
            {
                cout << "*" ;
            }
            else
            cout << " ";
        }
        cout << endl;
    }
}