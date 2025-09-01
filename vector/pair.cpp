#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int>arr{1,2,3,4,5};
   
   for (int i = 0; i < arr.size(); i++)
   {
     for (int j = i+1; j < arr.size(); j++)
     { 
       cout<<"(" << arr[i] <<"," << arr[j] <<")";
       cout << " Pair sum is:" << arr[i]+arr[j] << endl;   
     }
     
   }
   
}