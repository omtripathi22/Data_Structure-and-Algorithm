#include<bits\stdc++.h>
using namespace std;

//recursive function to check array is sorted or not
bool sort(vector<int>& arr,int idx){
    //base case
    if(idx==arr.size()){
        return true;
    }
    int num=arr[idx++];
    //recursive call
    return (num<arr[idx] && sort(arr,idx));
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
    cout << sort(arr,0) ;
    return 0;
}