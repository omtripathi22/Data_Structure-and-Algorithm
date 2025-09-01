#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    vector<int>price{7,1,5,3,6,4};
    int  x=INT_MAX,y=0 ;
    int max=INT_MIN;
    for (int i = 0; i < price.size(); i++)
    {
            if (price[i]<x)
            {
                x=price[i];
                y=i;
            }
    }
    for (int i = y; i < price.size(); i++)
    {
        if (price[i]>max)
        {
            max=price[i];
        }
        
    }
    cout <<"best price to buy stock " << x << endl << "best price to sell stock "<< max << endl;
    cout <<"profit is: " << max-x << endl;
}