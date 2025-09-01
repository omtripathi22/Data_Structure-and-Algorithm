#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout << "eenter the no. of rows:" << endl;
    cin >> rows;
    for(int i=0;i<2*rows;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout << " ";
        }
        for(int j=0;j<rows-i;j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}