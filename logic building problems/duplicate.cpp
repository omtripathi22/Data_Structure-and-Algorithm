#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{1,2,3,4,5,4};
    // int duplicate=0;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = i+1; j < arr.size(); j++)
    //     {
    //         if (arr[i]==arr[j])
    //         {
    //             duplicate=arr[i];
    //         }
            
    //     }
        
    // }
    // cout << "duplicate no. is:" << duplicate;
    
    /* Another Solution*/

    int ans=-1;
    for (int i = 0; i < arr.size(); i++)
    {
        int index=abs(arr[i] );
        if (arr[index]<0)
        {
            ans= index;
            cout <<"duplicate no. is:" << index ;
            
        }
        arr[index]*=-1;

    }
    return ans;
}