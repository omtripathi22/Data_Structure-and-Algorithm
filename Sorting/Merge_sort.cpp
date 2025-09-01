#include<iostream>
using namespace std;
void merge(int* arr,int s,int e){
    int mid= (e+s)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int* left=new int[len1];
    int* right=new int[len2];

    int k=s;
    for(int i=0;i<len1;i++){
        left[i]=arr[k+i];
    }

    k=mid+1; 
    for(int i=0;i<len2;i++){
        right[i]=arr[k++];
    }

    int leftIndex=0;
    int rightIndex=0;
    int arrayIndex=s; 
    while(leftIndex<len1 && rightIndex<len2){
        if(left[leftIndex]<right[rightIndex]){
            arr[arrayIndex++]=left[leftIndex++];
        }
        else{
            arr[arrayIndex++]=right[rightIndex++];
        }
    }

    while(leftIndex<len1){
        arr[arrayIndex++]=left[leftIndex++];
    }
    while(rightIndex<len2){
       arr[arrayIndex++]=right[rightIndex++];
    }
}
void mergeSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid=(e+s)/2;
    //break left part
    mergeSort(arr,s,mid);
    //break right part
    mergeSort(arr,mid+1,e);
    //merge 2 arrays
    merge(arr,s,e);
}
int main(){
    int arr[]={1,7,4,9,22,3,1,5,3,8,66,3};
    int n=sizeof(arr)/sizeof(int);
    int s=0;
    int e=n-1;
    mergeSort(arr,s,e);
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
    return 0;
}