#include<iostream>
using namespace std;
int main()
{
    int row;
    cout << "enter no. of rows:" << endl;
    cin >> row;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row-i;j++)
        {
            cout << " " ;
        }
        for(int j=0; j<(2*i+1);j++)
        {
            if(j==0||j==2*i)
            {
                cout << "*";
            }
            else
            cout << " ";
        }
        cout << endl;
    }
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