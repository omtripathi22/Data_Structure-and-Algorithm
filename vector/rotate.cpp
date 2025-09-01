#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,2,3,4,5,6,7,8};
    int d=2;
    vector<int>ans;
        for(int i=d;i<arr.size();i++){
           ans.push_back(arr[i]);
          
        }
        for(int i=0;i<d;i++){
            ans.push_back(arr[i]);
        }
        for(int i=0;i<ans.size();i++){
          cout << ans[i];
          
        }
}