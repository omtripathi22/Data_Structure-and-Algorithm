#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter value of n:" << endl;
    cin >> n;
    for(int i=0;i<n;i=i+1)
    {
        for(int j=0;j<i+1;j=j+1)
        {
            cout << i+1;
            if(i!=j)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    for(int i=0;i<n;i=i+1)
    {
        for(int j=0;j<n-i;j=j+1)
        {
            cout << n-i;
             if(j!=n-i-1)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}