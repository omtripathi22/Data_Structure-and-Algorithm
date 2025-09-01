#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout << "enter the no. of rows:"<< endl;
    cin >> row;
    cout << "enter the no. of column:" << endl;
    cin >> col;
    for(int i=1;i<=row;i=i+1)
    {
        for(int j=1;j<=col;j=j+1)
        {
            if(i==1 || i==row || j==1 || j==col)
            {
                cout << "* ";
            }
            else
            cout <<"  ";
           // if(j==1 || j==col-1)
           // {
           //     cout << "* ";
           // }
        }
        cout << endl;
    }
}