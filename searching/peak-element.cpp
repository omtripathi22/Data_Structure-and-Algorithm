#include<iostream>
using namespace std;
int peakElement(int* arr,int &size)
{
    int peak=-1;
    int start=0;
    int end=size-1;
    int mid =start+(end-start)/2;
    while (start<=end)
    {
        if (arr[mid]>=arr[mid-1])
        {
            peak=arr[mid];
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return peak;
}
int main()
{
    int arr[]={1,4,7,10,6,4};
    int size=6;
    int target= peakElement(arr,size);
    cout <<"peak element is " << target <<endl;
}