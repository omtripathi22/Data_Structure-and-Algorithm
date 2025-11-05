#include<bits\stdc++.h>
using namespace std;

void reverse(vector<int>&arr,int low,int high){
    if(low>high){
        return ;
    }
    swap(arr[low++],arr[high--]);
    reverse(arr,low,high);
}

//main function
int main(){
    //size of array
    int n;
    cout << "enter the size of array:";
    cin >> n;
    vector<int>arr(n);
    cout << "enter the elements of array:";
    // taking input of array
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    reverse(arr,0,arr.size()-1);

    for(int num:arr){
        cout << num <<" ";
    }
    
    return 0;
}