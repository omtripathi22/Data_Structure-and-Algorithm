#include<bits\stdc++.h>
using namespace std;

//recursive function to find max element
int maxElement(vector<int>& arr,int idx){
    //base case
    if(idx==arr.size()){
        return INT_MIN;
    }
    int num=arr[idx++];
    //recursive call
    return max(num,maxElement(arr,idx));
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
    cout << maxElement(arr,0) ;
    return 0;
}