#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{1,2,3,4,5};
    vector<int>brr{3,4,5,6,7,8};
    vector<int>crr;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i]==brr[j])
            {
                brr[j]=INT16_MIN;
            }
        }
        crr.push_back(arr[i]);
    }
    for (int i = 0; i < brr.size(); i++)
    {
        if(brr[i]!=INT16_MIN)
        crr.push_back(brr[i]);
    }
    
    cout << "union of array is:" << endl;
    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] <<" ";
    }
    
}