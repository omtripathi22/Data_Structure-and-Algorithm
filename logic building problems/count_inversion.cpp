#include<iostream>
#include<vector>
using namespace std;
int merge(vector<int>&arr,int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int count=0;

    int*left=new int[len1];
    int*right=new int[len2];
    
    int k=s;
    for(int i=0;i<len1;i++){
        left[i]=arr[k+i];
    }
    k=mid+1;
    for(int i=0;i<len2;i++){
        right[i]=arr[k+i];
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
            count+=len1-leftIndex;
        }
    }
    while(leftIndex<len1){
        arr[arrayIndex++]=left[leftIndex++];
    }
    while(rightIndex<len2){
        arr[arrayIndex++]=right[rightIndex++];
    }
    return count;
}
int mergeSort(vector<int>&arr,int s,int e){
    if(s>=e){
        return 0;
    }
    int c=0;
    int mid=s+(e-s)/2;
    c+=mergeSort(arr,s,mid);
    c+=mergeSort(arr,mid+1,e);
    c+=merge(arr,s,e);
    return c;
}
int main(){
    vector<int>arr{8,4,2,1};
    int cnv=0;
    cnv=mergeSort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<< arr[i] <<" ";
    }
    cout << endl << cnv;
}