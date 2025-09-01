#include<iostream>
using namespace std;
int main()
{
    int rows,columns;
    cout<<"enter the no. of rows:"<<endl;
    cin >> rows ;
    cout<<"enter the no. of columns:"<<endl;
    cin >> columns ;
    for(int i=0;i<rows;i=i+1)
    {
        for(int j=0;j<columns;j=j+1)
        {
            cout << "*" ;
        }
        cout << endl;
    }
}