#include<iostream>
using namespace std;
int binarysearch(int arr[], int &size, int &target)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while (start<=end)
    {
        if (arr[mid]==target)
        {
           return mid;
        }
        else if (arr[mid]<target)
        {
            start=mid+1;
        }
        else 
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main()
{
    int arr[7]={1,3,5,7,9,10,13};
    int size =7;
    int target =11;
    int indexofTarget= binarysearch(arr,size,target);
    if (indexofTarget==-1)
    {
        cout << "target not found ";
    }
    else
    { 
        cout << "Target found at " << indexofTarget << " index" ;
    }
}