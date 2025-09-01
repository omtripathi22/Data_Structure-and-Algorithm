#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter value of n :"<< endl;
    cin >> n;
    for (int row=0;row<n;row++)
    {
        for (int col=0;col<n-row-1;col++)
        {
            cout << " ";
        }
        int start =1;
        if(row==0||row==n-1)
        { 
            cout << start ;
            start =start+1;
        }
        else 
    }
}