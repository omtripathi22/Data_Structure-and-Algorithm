#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{1,2,3,3,4};
    vector<int>brr{3,4,5,6};
    vector<int>ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i]==brr[j])
            {
                brr[j]=INT16_MIN;
                ans.push_back(arr[i]);
            }
            
        }
        
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    
    
}