#include<iostream>
using namespace std;
int main()
{
    int arr[7]={1,0,0,1,0,0,1};
    int x=0,y=0;
    for(int i=0;i<7;i++)
    {
        if(arr[i]==1)
        {
            x++;
        }
        else
        y++;
    }
    cout << "no. of 1's are:" << x << endl;
    cout << "no. of 0's are:" << y << endl;
}
