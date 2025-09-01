#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the no. of rows:"<< endl;
    cin >> n;
    for(int i=0;i<n;i=i+1)
    {
        for(int j=0;j<i+1;j=j+1)
        {
            char ch = (int)j+65;
            cout << ch ;
        }
        for(int j=i;j>0;j=j-1)
        {
           char ch = (int)j+64;
            cout << ch ;  
        }
         cout << endl;
    }
}