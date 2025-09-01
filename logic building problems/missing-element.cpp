#include<iostream>
using namespace std;
void findMissing(int*arr,int n)
{
    int i=0;
    while(i<n)
    {
        int index=arr[i]-1;
        if(arr[i]!=arr[index])
        {
            swap(arr[i],arr[index]);
        }
        else
        i++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    cout<<endl;
    for (int  i = 0; i < n; i++)
    {
        if (arr[i]!=i+1)
        {
            cout << "Missing element is:"<< i+1 << endl;
        }
        
    }
    
    
}
int main()
{
    int arr[]={1,3,4,3,5,6,7};
   int n;
   n=sizeof(arr)/sizeof(int);
   findMissing(arr ,n);
   return 0;
    

}