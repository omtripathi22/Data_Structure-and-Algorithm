#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> arr,int key,int low,int high){
    if(low>high){
        return -1;
    }
    int mid=low+(high-low)/2;
    if(arr[mid]==key){
        cout << mid << endl;
        return mid;
    }
    else if(arr[mid]>key){
        binarySearch(arr,key,low,mid-1);
    }
    else{
        binarySearch(arr,key,mid+1,high);
    }
}
int main(){
    vector<int> arr{1,2,3,4,5,6,7,8,9};
    int target;
    cout << "enter the element you want to search :";
    cin >> target;
    int end=arr.size()-1;
    int start=0;
    int ans=binarySearch(arr,target,start,end);
   
    cout << "element found at index :" << ans ;
    return 0;
}