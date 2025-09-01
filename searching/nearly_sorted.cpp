#include<iostream>
using namespace std;
int binarySearch(int* arr,int &size, int &target)
{
    int start=0;
    int end=size-1;
    int mid=start +(end-start)/2;
    while (start<=end)
    {
        if (arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid-1]==target)
        {
            return mid-1;
        }
        else if(arr[mid+1]==target)
        {
            return mid+1;
        }
        else if (arr[mid-1]>target)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    int arr[]={10,3,14,40,20,50,80,70,90};
    int size=9;
    int target=50;
    int index=binarySearch(arr,size,target);
    if (index!=(-1))
    {
        cout << "found at " << index <<" index";
    }
    else
    {
        cout <<"not found";
    }
}