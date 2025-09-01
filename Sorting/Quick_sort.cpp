#include<iostream>
using namespace std; 
int partition(int* arr,int s,int e){
    int pivot=arr[s];
    int k=e;
    for(int i=e;i>s;i--){
        if(arr[i]>pivot){
            swap(arr[i],arr[k--]);
        }
    }
    swap(arr[s],arr[k]);
    return k;
}
void quickSort(int* arr,int s,int e){
    if(s>=e){
        return;
    }
    int p=partition(arr,s,e);

    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main(){
    int arr[]={1,8,5,7,3,4,9,0,2,6,1,2,1,3};
    int n=sizeof(arr)/sizeof(int);
    int s=0;
    int e=n-1;
    quickSort(arr,s,e);
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
}