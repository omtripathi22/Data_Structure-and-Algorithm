#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        vector<int>ans(3*n);
        int j=0;
        for(int i=1;i<=n;i++){
           ans[j]=i;
           j+=3;
        }
        j=1;
        for(int i=n+1;i<=3*n;i++){
           ans[j]=i;
           j++;
           if(j%3==0){
             j++;
           }
        }

        for(int i=0;i<3*n;i++){
            cout << ans[i] <<" ";
        }
        cout << endl;
    }
}