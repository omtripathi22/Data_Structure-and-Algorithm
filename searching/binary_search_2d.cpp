#include<iostream>
using namespace std;
int binarySearch(int arr[][3],int &target, int &row,int &col)
{
    int start=0;
    int end=(row*col)-1;
    int mid=start+(end-start)/2;
    while (start<=end)
    {
        int rowIndex=mid/col;
        int colIndex=mid%col;
        if (arr[rowIndex][colIndex]==target)
        {
            return true;
        }
        else if (arr[rowIndex][colIndex]>target)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return false;
}
int main()
{
    int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int target=5;
    int row=4;
    int col=3;
    bool ans=binarySearch(arr,target,row,col);
    if (ans==true)
    {
        cout << "found" << endl; 
    }
    else{
        cout << "not found" << endl;
    }
}