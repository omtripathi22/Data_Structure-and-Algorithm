#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{1,2,-3,4,-5,6};
    int start=0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]<0)
        {
            swap(arr[i],arr[start]);
            start++;
        }
        
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] <<" ";
    }
    
}