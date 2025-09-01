#include<iostream>
using namespace std;
int firstOccurence(int arr[], int &size,int &target)
{
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid= (end+start)/2;
    while (start<=end)
    {
        if (target==arr[mid])
        {
            ans=mid;
            end=mid-1;
        }
        else if (target>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=(end+start)/2;
    }
    return ans;
}
int main()
{
    int arr[]={1,2,2,3,3,4,4,4,5,5,6,8,9};
    int size=13;
    int target=4;
    int index=firstOccurence(arr,size,target);
    if (index==-1)
    {
        cout << "Target does not found";
    }
    else
    {
        cout << "Target found at "<< index <<"index";
    }
}