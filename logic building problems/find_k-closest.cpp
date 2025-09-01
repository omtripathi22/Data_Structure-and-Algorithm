#include<iostream>
#include<vector>
using namespace std;
void findClosest(vector<int> &arr,int &x, int &k)
{
    int l=0;
    int h=arr.size()-1;
    while((h-l)>k)
    {
        if (x-arr[l]>arr[h]-x)
        {
            l++;
        }
        else{
            h--;
        }
    }
    for (int i = l; i < h; i++)
    {
        cout << arr[i];
    }
}
int main()
{
    vector<int>arr;
    arr={1,2,3,4,5,6,7,8,9};
    int x=7;
    int k=5;
    findClosest(arr,x,k);
}